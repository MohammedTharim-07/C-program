#include<stdio.h>

#define IND_ON 1
#define IND_OFF 0

int seatbelt = IND_ON;

void led_on(void)
{
    printf("Seatbelt LED ON\n");
}

void led_off(void)
{
    printf("Seatbelt LED OFF\n");
}

int main(void)
{
    if(seatbelt == IND_ON)
    {
        led_on();
    }
    else
    {
        led_off();
    }

    return 0;
}
