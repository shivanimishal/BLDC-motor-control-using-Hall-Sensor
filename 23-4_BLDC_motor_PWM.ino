#include<avr/io.h>

uint16_t x=10,y=20;

int main(void)
{
  timer1_int();
  while(1)
  {
    
  }
  return 0;
}
  void timer1_int(void)
  {
    DDRB=0b00000110; //PB1=P9;PB2=P10
    SREG=0b10000000; //GIE 7th Bit Set(I Bit)
    TCNT1=0;
    TCCR1A=0b11100011;
    TCCR1B=0b00000001;
    TIMSK1=0b00000001;
  }
  ISR(TIMER1_OVF_vect)
  {
    OCR1A=512;
    OCR1B=450;
  }
