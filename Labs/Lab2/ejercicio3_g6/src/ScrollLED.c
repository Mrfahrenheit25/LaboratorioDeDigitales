// memory-mapped I/O addresses
#define GPIO_LEDs 0x80001404
#define GPIO_INOUT 0x80001408
#define WRITE_GPIO(dir, value) { (*(volatile unsigned *)dir) = (value); }
#define DELAY 120000
int main(void){
   
int En_Value=0xFFFF, LED_Value = 0x0001;
static int i=0, j = 0;
WRITE_GPIO(GPIO_INOUT, En_Value);
   while (1) {
    WRITE_GPIO(GPIO_LEDs, LED_Value); // display switch value on LEDs
	 for (i=0; i < DELAY; i++) ;  // delay between printf's
        LED_Value = 0x0001;
         while(LED_Value < 0x8000){
                WRITE_GPIO(GPIO_LEDs, LED_Value);
                for (i=0; i < DELAY; i++) ;
                LED_Value = LED_Value << 1;
         }

         while(LED_Value > 0x0001){
                WRITE_GPIO(GPIO_LEDs, LED_Value);
                for (i=0; i < DELAY; i++) ;
                LED_Value = LED_Value >> 1;
         }
        LED_Value = 0x0003;

        while(LED_Value < 0x8000){
                WRITE_GPIO(GPIO_LEDs, LED_Value);
                for (i=0; i < DELAY; i++) ;
                LED_Value = LED_Value << 1;
         }

         while(LED_Value > 0x0003){
                WRITE_GPIO(GPIO_LEDs, LED_Value);
                for (i=0; i < DELAY; i++) ;
                LED_Value = LED_Value >> 1;
         }
         LED_Value = 0x0007;
         while(LED_Value < 0x8000){
                WRITE_GPIO(GPIO_LEDs, LED_Value);
                for (i=0; i < DELAY; i++) ;
                LED_Value = LED_Value << 1;
         }

         while(LED_Value > 0x0007){
                WRITE_GPIO(GPIO_LEDs, LED_Value);
                for (i=0; i < DELAY; i++) ;
                LED_Value = LED_Value >> 1;
         }
         LED_Value = 0x000F;
         while(LED_Value < 0x8000){
                WRITE_GPIO(GPIO_LEDs, LED_Value);
                for (i=0; i < DELAY; i++) ;
                LED_Value = LED_Value << 1;
         }

         while(LED_Value > 0x000F){
                WRITE_GPIO(GPIO_LEDs, LED_Value);
                for (i=0; i < DELAY; i++) ;
                LED_Value = LED_Value >> 1;
         }
        LED_Value = 0x001F;
        while(LED_Value < 0x8000){
                WRITE_GPIO(GPIO_LEDs, LED_Value);
                for (i=0; i < DELAY; i++) ;
                LED_Value = LED_Value << 1;
         }

        while(LED_Value > 0x001F){
                WRITE_GPIO(GPIO_LEDs, LED_Value);
                for (i=0; i < DELAY; i++) ;
                LED_Value = LED_Value >> 1;
         }
        
        LED_Value = 0x003F;
        while(LED_Value < 0x8000){
                WRITE_GPIO(GPIO_LEDs, LED_Value);
                for (i=0; i < DELAY; i++) ;
                LED_Value = LED_Value << 1;
         }

        while(LED_Value > 0x003F){
                WRITE_GPIO(GPIO_LEDs, LED_Value);
                for (i=0; i < DELAY; i++) ;
                LED_Value = LED_Value >> 1;
         }
        LED_Value = 0x007F;
        while(LED_Value < 0x8000){
                WRITE_GPIO(GPIO_LEDs, LED_Value);
                for (i=0; i < DELAY; i++) ;
                LED_Value = LED_Value << 1;
         }

        while(LED_Value > 0x007F){
                WRITE_GPIO(GPIO_LEDs, LED_Value);
                for (i=0; i < DELAY; i++) ;
                LED_Value = LED_Value >> 1;
         } 
        LED_Value = 0x00FF;
        while(LED_Value < 0x8000){
                WRITE_GPIO(GPIO_LEDs, LED_Value);
                for (i=0; i < DELAY; i++) ;
                LED_Value = LED_Value << 1;
         }

        while(LED_Value > 0x00FF){
                WRITE_GPIO(GPIO_LEDs, LED_Value);
                for (i=0; i < DELAY; i++) ;
                LED_Value = LED_Value >> 1;
         }
        LED_Value = 0x01FF;
        while(LED_Value < 0x8000){
                WRITE_GPIO(GPIO_LEDs, LED_Value);
                for (i=0; i < DELAY; i++) ;
                LED_Value = LED_Value << 1;
         }

        while(LED_Value > 0x01FF){
                WRITE_GPIO(GPIO_LEDs, LED_Value);
                for (i=0; i < DELAY; i++) ;
                LED_Value = LED_Value >> 1;
         }
        LED_Value = 0x03FF;
        while(LED_Value < 0x8000){
                WRITE_GPIO(GPIO_LEDs, LED_Value);
                for (i=0; i < DELAY; i++) ;
                LED_Value = LED_Value << 1;
         }

        while(LED_Value > 0x03FF){
                WRITE_GPIO(GPIO_LEDs, LED_Value);
                for (i=0; i < DELAY; i++) ;
                LED_Value = LED_Value >> 1;
        }
        LED_Value = 0x07FF;
        while(LED_Value < 0x8000){
                WRITE_GPIO(GPIO_LEDs, LED_Value);
                for (i=0; i < DELAY; i++) ;
                LED_Value = LED_Value << 1;
        }

        while(LED_Value > 0x07FF){
                WRITE_GPIO(GPIO_LEDs, LED_Value);
                for (i=0; i < DELAY; i++) ;
                LED_Value = LED_Value >> 1;
        }
        LED_Value = 0x0FFF;
        while(LED_Value < 0x8000){
                WRITE_GPIO(GPIO_LEDs, LED_Value);
                for (i=0; i < DELAY; i++) ;
                LED_Value = LED_Value << 1;
        }

        while(LED_Value > 0x0FFF){
                WRITE_GPIO(GPIO_LEDs, LED_Value);
                for (i=0; i < DELAY; i++) ;
                LED_Value = LED_Value >> 1;
        }
        LED_Value = 0x1FFF;
        while(LED_Value < 0x8000){
                WRITE_GPIO(GPIO_LEDs, LED_Value);
                for (i=0; i < DELAY; i++) ;
                LED_Value = LED_Value << 1;
         }

        while(LED_Value > 0x1FFF){
                WRITE_GPIO(GPIO_LEDs, LED_Value);
                for (i=0; i < DELAY; i++) ;
                LED_Value = LED_Value >> 1;
         }
        LED_Value = 0x3FFF;
        while(LED_Value < 0x8000){
                WRITE_GPIO(GPIO_LEDs, LED_Value);
                for (i=0; i < DELAY; i++) ;
                LED_Value = LED_Value << 1;
         }

        while(LED_Value > 0x3FFF){
                WRITE_GPIO(GPIO_LEDs, LED_Value);
                for (i=0; i < DELAY; i++) ;
                LED_Value = LED_Value >> 1;
        }
        LED_Value = 0x7FFF;
        while(LED_Value < 0x8000){
                WRITE_GPIO(GPIO_LEDs, LED_Value);
                for (i=0; i < DELAY; i++) ;
                LED_Value = LED_Value << 1;
        }

        while(LED_Value > 0x7FFF){
                WRITE_GPIO(GPIO_LEDs, LED_Value);
                for (i=0; i < DELAY; i++) ;
                LED_Value = LED_Value >> 1;
        }
        LED_Value = 0xFFFF;
        while(LED_Value < 0x8000){
                WRITE_GPIO(GPIO_LEDs, LED_Value);
                for (i=0; i < DELAY; i++) ;
                LED_Value = LED_Value << 1;
        }

        while(LED_Value > 0xFFFF){
                WRITE_GPIO(GPIO_LEDs, LED_Value);
                for (i=0; i < DELAY; i++) ;
                LED_Value = LED_Value >> 1;
        }

   }
        return(0);
}

