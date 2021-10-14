#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h> 

//function for exchanging the two numbers
void swap(int* i, int* j){
int temp;
temp = *i;
*i=*j;
*j=temp;
}

int main(void){
DDRD|=0b00111100;  //used IC 7447, as otherwise would need 14 pins for two seven-segment displays. //setting the pins 2,3,4,5 as outputs
DDRB|=0b00111100;  //setting pins 10,11,12,13 as outputs

int A[10]={0x00,0x04,0x08,0x09,0x10,0x14,0x18,0x1C,0x20,0x24};  //numbers 0 to 9
int i=0; //the number on first ssd
int j=1; //the number on second ssd

while(1){
PORTD = A[i];
PORTB = A[j];
_delay_ms(1000);
swap(&i,&j);
}

return 0;
}
