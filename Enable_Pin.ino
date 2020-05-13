#include<avr/io.h>
#include<util/delay.h>
# define RPM 6000

//Global var
//uint16_t RPM=6000;
uint16_t d=(10000000)/(RPM);

int main(void)
{
  //d=60*1000000/(RPM*6);
  DDRD=0b10000000;
  DDRB=0b10000000;
  
  while(1) //infinite loop
    {
      PORTB=0b00100000;
      _delay_us(d);
      PORTB=0b00000000;
      _delay_us(d);
      PORTB=0b1000000;
      _delay_us(d);
      PORTB=0b1100000;
      _delay_us(d);
      PORTB=0b11100000;
      _delay_us(d);
      PORTB=0b0110000;
      _delay_us(d);

      PORTD=0b01100000;
      _delay_us(d);
      PORTD=0b11100000;
      _delay_us(d);
      PORTD=0b1100000;
      _delay_us(d);
      PORTD=0b1000000;
      _delay_us(d);
      PORTD=0b00000000;
      _delay_us(d);
      PORTD=0b0010000;
      _delay_us(d);

    }
  return 0;
}
 
