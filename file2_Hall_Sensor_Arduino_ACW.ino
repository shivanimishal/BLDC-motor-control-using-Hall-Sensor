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
  while(1) //infinite loop
    {
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
 void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
