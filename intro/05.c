#include <stdio.h>

int main(void)
{
    float celsiu, fahr;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr=upper;
    printf("Fahr\tCelsius\n");
    while (fahr>=lower) {
        celsiu = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsiu);
        fahr = fahr - step;
    }
}
