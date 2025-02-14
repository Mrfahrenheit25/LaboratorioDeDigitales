// memory-mapped I/O addresses
#define GPIO_SWs 0x80001400
#define GPIO_LEDs 0x80001404
#define GPIO_INOUT 0x80001408
#define READ_GPIO(dir) (*(volatile unsigned *)dir)
#define WRITE_GPIO(dir, value) { (*(volatile unsigned *)dir) = (value); }
int main ( void )
{
int En_Value=0x001F , switches_value,switches_lsvalue,switches_msvalues;
WRITE_GPIO(GPIO_INOUT, En_Value);
while (1) {
switches_value = READ_GPIO(GPIO_SWs); // read value on switches
switches_lsvalue = switches_value >> 16; // shift into lower 16 bits
unsigned int b = 0x000F;
unsigned int c = 0xF000;
unsigned int mask1 = switches_lsvalue & b;
switches_msvalues = switches_value >> 28;
unsigned int mask2 = switches_msvalues & b;
unsigned int result = mask1 + mask2;

WRITE_GPIO(GPIO_LEDs, result); // display switch value on LEDs
}
return(0);
}