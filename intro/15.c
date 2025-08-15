#include <stdio.h>

int convert(float fahr);

int main(void)
{
    convert(300);
}


int convert(float fahr)
{
    float celsius = 0;
    celsius = (5.0/9.0) * (fahr-32.0);
    
    printf("Fahr\tCelsius\n");
    printf("%3.0f\t%6.1f\n", fahr, celsius);

    return 0;
}
