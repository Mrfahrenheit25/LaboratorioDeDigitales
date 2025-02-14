// memory-mapped I/O addresses

#define GPIO_SWs 0x80001400
#define cntr_blue 0x80001240
#define cntr_green 0x80001280
#define cntr_red 0x800012C0
#define HRC_blue 0x80001244
#define HRC_green 0x80001284
#define HRC_red 0x800012C4
#define LRC_blue 0x80001248
#define LRC_green 0x80001288
#define LRC_red 0x800012C8
#define ctrl_blue 0x8000124C
#define ctrl_green 0x8000128C
#define ctrl_red 0x800012CC
#define GPIO_LEDs 0x80001404
#define GPIO_INOUT 0x80001408

#define READ_GPIO(dir) (*(volatile unsigned *)dir)
#define WRITE_GPIO(dir, value) { (*(volatile unsigned *)dir) = (value); }

int HRC(int hrc){
int new_hrc = (hrc & 0x00001)*0x0010 + ((hrc >> 1) & 0x00001)*0x0010 + ((hrc >> 2) & 0x00001)*0x0010 + ((hrc >> 3) & 0x00001)*0x0010 + ((hrc >> 4) & 0x00001)*0x0010;
return new_hrc;
}
int main ( void )
{
int En_Value=0x0009, HRC_Value=0x00A0, LRC_Value=0x00A0, switches_value,switches_lsvalue;
WRITE_GPIO(ctrl_blue, En_Value);
WRITE_GPIO(ctrl_green, En_Value);
WRITE_GPIO(ctrl_red, En_Value);
WRITE_GPIO(HRC_blue, HRC_Value);
WRITE_GPIO(HRC_green, HRC_Value);
WRITE_GPIO(HRC_red, HRC_Value);
WRITE_GPIO(LRC_blue, LRC_Value);
WRITE_GPIO(LRC_green, LRC_Value);
WRITE_GPIO(LRC_red, LRC_Value);
while (1) {
switches_value = READ_GPIO(GPIO_SWs); // read value on switches
switches_lsvalue = switches_value >> 16; // shift into lower 16 bits
int new_HRC_B = HRC_Value - HRC(switches_lsvalue);
switches_lsvalue = switches_lsvalue >> 5 ;
int new_HRC_G = HRC_Value - HRC(switches_lsvalue);
switches_lsvalue = switches_lsvalue >> 5 ;
int new_HRC_R = HRC_Value - HRC(switches_lsvalue);
WRITE_GPIO(HRC_blue, new_HRC_B);
WRITE_GPIO(HRC_green, new_HRC_G);
WRITE_GPIO(HRC_red, new_HRC_R);
}
return(0);
}