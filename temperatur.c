#include <stdio.h>

int main(void) {
    

    double celsius = 0.0;
    double fahrenheit = 0.0;

    printf("Temperatur i Celsius: ");
    scanf("%lf", &celsius);
    
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    printf("%.lf C ar samma som %lf F\n", celsius, fahrenheit);
    return 0;
}