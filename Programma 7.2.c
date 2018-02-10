#include <stdio.h>
#include <wiringPi.h>
#include <unistd.h>

void pinout();

int main() {

wiringPiSetup();
pinout();

int wPi[5]={1,4,5,6,7};
int i;

printf("FT1060 in esecuzione...\n");
printf("Premere Ctrl+C per terminare\n");

while(1)
{
for(i=0; i=4; i++)
{
digitalWrite (wPi[i],HIGH);
usleep(100000);
digitalWrite (wPi[i], LOW);
usleep(100000);
}
}
return 0;
}

void pinout()
{
int wPi[5]={1,4,5,6,7);
int i;

for(i=0; i<=4; i++)
{
pinMode (wPi[i],OUTPUT);
}
}

 
