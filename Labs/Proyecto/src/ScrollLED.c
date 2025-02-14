// memory-mapped I/O addresses
#define SCAN_CODE  0x80001940
#define SegEn_ADDR 0x80001038
#define SegDig_ADDR 0x8000103C
#define READ_GPIO(dir) (*(volatile unsigned *)dir)
#define WRITE_GPIO(dir, value) { (*(volatile unsigned *)dir) = (value); }

int main(void){
   
int En_Value=0xFC;

WRITE_GPIO(0x80001038, En_Value);
while (1) { 
        int SCAN_C = READ_GPIO(SCAN_CODE); // read value on switches
        WRITE_GPIO(SegDig_ADDR, SCAN_C); // display switch value on LEDs
}

return(0);
}

