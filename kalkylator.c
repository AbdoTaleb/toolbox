
#include <stdio.h>

int main(void) {

    double first_number = 0.0;
    double second_number = 0.0;

    printf("Ange forsta talet: ");
    scanf("%lf", &first_number);

    printf("Ange andra talet: ");
    scanf("%lf", &second_number);

    printf("Summan av dom tva talen ar: %.2f\n", first_number + second_number);
    printf("Differensen av dom tva talen ar : %.2f\n", first_number - second_number);
    printf("Produkten av dom tva talen ar: %.2f\n", first_number * second_number);
    printf("Kvoten av dom tva talen ar: %.2f\n", first_number / second_number);

    return 0;

}