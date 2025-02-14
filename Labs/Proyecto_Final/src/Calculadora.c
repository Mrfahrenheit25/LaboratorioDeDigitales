#define GPIO_SWs 0x80001400
#define GPIO_LEDs 0x80001404
#define GPIO_INOUT 0x80001408
#define RGPIO_INTE 0x8000140C
#define RGPIO_PTRIG 0x80001410
#define RGPIO_CTRL 0x80001418
#define RGPIO_INTS 0x8000141C

#define RGPIO2_INTE 0x8000180C
#define RGPIO2_PTRIG 0x80001810
#define RGPIO2_CTRL 0x80001818
#define RGPIO2_INTS 0x8000181C

#define GPIO_BTNs 0x80001800

#define SCAN_CODE 0x80001940
#define SegEn_ADDR 0x80001038
#define SegDig_ADDR 0x8000103C

#define READ_GPIO(dir) (*(volatile unsigned *)dir)
#define WRITE_GPIO(dir, value) { (*(volatile unsigned *)dir) = (value); }


// Función que convierte scan code a carácter (PS/2)
int scan_code_to_int(int scan_code) {
// Tabla de conversión simple para un teclado PS/2 estándar (layout QWERTY)
switch (scan_code) {
case 0x16: return 1;
case 0x1E: return 2;
case 0x26: return 3;
case 0x25: return 4;
case 0x2E: return 5;
case 0x36: return 6;
case 0x3D: return 7;
case 0x3E: return 8;
case 0x46: return 9;
case 0x45: return 0;
// Agrega más casos según sea necesario
default: return 0; // Carácter desconocido
}
}
int main(void){

int En_Value=0xF0;
int scan1 = 0;
int scan2 = 0;
int SCAN_C = 0;
unsigned int CURRENT_NUM = 0;
int SWITCHES, BTN, result, OP;
// /* Configure LEDs and Switches */
WRITE_GPIO(0x80001038, En_Value);

    while (1) {

        SCAN_C = 0xFF & READ_GPIO(SCAN_CODE); // read value on switches
        BTN = READ_GPIO(GPIO_BTNs);
        SWITCHES = 0x80010000 & READ_GPIO(GPIO_SWs);

        if (CURRENT_NUM == 0)
        {
            scan1 = scan_code_to_int(SCAN_C);
            WRITE_GPIO(SegDig_ADDR, scan1); // display switch value on LEDs
        }
        if (CURRENT_NUM == 1){
            scan2 = scan_code_to_int(SCAN_C);
            WRITE_GPIO(SegDig_ADDR, scan2); // display switch value on LEDs
        }
        if (CURRENT_NUM == 2){
            if (OP == 2) result = scan1 + scan2;
            else if (OP == 4) result = scan1 - scan2;
            else if (OP == 8) result = scan1 * scan2;
            else if (OP == 16) result = scan1 / scan2;
            WRITE_GPIO(SegDig_ADDR, result); // display switch value on LEDs
        }
        if (BTN > 1 && CURRENT_NUM == 0){
            CURRENT_NUM = 1;
            OP = BTN;
        }
        if (BTN > 1 && CURRENT_NUM == 3){
            CURRENT_NUM = 1;
            OP = BTN;
        }
        if (BTN == 1 && CURRENT_NUM == 1){
            CURRENT_NUM = 2;
        }
        if (SWITCHES == 0x10000 && CURRENT_NUM == 2){
            CURRENT_NUM = 0;
            OP = 0;
            scan1 = 0;
            scan2 = 0;
        }
        else if (SWITCHES == 0x80000000 && CURRENT_NUM == 2){
            CURRENT_NUM = 3;
            OP = 0;
            scan1 = result;
            scan2 = 0;
        }
    }

return(0);
}


