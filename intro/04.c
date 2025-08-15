#include <stdio.h>

int main(void)
{
    float celsius, fahr;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20.0;

    celsius = lower;
    printf("Celsius\tFahr\n");
    while (celsius <= upper){
        fahr = ((9.0/5.0) * celsius) + 32.0;
        printf("%.2f\t%.2f\n", celsius, fahr);

        celsius = celsius + step;
    }

    return 0;
}
