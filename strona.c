#include <stido.h>
#include <wiringPi.h>

#definite DIODA 11

int main (void)
{
	printf("Migajaca dioda GPIO\n");

	wiringPiSetup();
	pinMode (DIODA, OUTPUT);

while(1)
{
for(int i=0;i<3;i++)
delay(200);
digitaWrite (DIODA, HIGH);
delay(200)
digiWrite (DIODA, LOW);
delay(200)
}
delay(1000); 

}

return o;

}
