// memory-mapped I/O addresses
#define GPIO_LEDs  0x80001404
#define GPIO_INOUT 0x80001408
#define GPIO_BTNs  0x80001800
#define READ_GPIO(dir) (*(volatile unsigned *)dir)
#define WRITE_GPIO(dir, value) { (*(volatile unsigned *)dir) = (value); }

int main(void){
   
int En_Value=0xFFFF, LED_Value = 0x0001;
int BTNU, BTNC, BTN;
int DELAY = 12000;

static int i=0, j = 0;
WRITE_GPIO(GPIO_INOUT, En_Value);
//revsar cual es BTNC y BTNU para definirlos y poner los valores dentro de la vara 
BTN = READ_GPIO(GPIO_BTNs); // read value on switches
   while (1) {
    WRITE_GPIO(GPIO_LEDs, LED_Value); // display switch value on LEDs
	for (i=0; i < DELAY; i++) ;  // delay between printf's
        LED_Value = LED_Value + 1;
        if (BTNC == 1 && DELAY == 12000)
        {
         DELAY = 16000;
        }
        else if (BTNC == 1 && DELAY == 16000)
        {
                DELAY = 12000;
        }
        if (BTNU == 1)
        {
                LED_Value = 0x0001;
        }
        
         

        
        }
        return(0);
}

