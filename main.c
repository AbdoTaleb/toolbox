#include <stdio.h>
#include "verktyg.h"

static void skriv_meny(void) {
    printf("\n=== Gruppens verktygslada ===\n");
    printf("1. Temperaturomvandling (Celsius -> Fahrenheit)\n");
    printf("2. Rektangelns area\n");
    printf("3. Multiplikationstabell\n");
    printf("4. Kontrollera om ett tal ar ett primtal\n");
    printf("5. FizzBuzz for ett intervall\n");
    printf("6. Enkel rakning (+, -, *, /)\n");
    printf("0. Avsluta\n");
    printf("Val: ");
}

int main(void) {
    int val;

    do {
        skriv_meny();
        scanf("%d", &val);

        switch (val) {
            case 1: {
                double celsius;
                printf("Ange temperatur i Celsius: ");
                scanf("%lf", &celsius);
                printf("%.2f C = %.2f F\n",
                       celsius, celsius_till_fahrenheit(celsius));
                break;
            }

            case 2: {
                double bredd, hojd;
                printf("Ange bredd och hojd: ");
                scanf("%lf %lf", &bredd, &hojd);
                printf("Arean ar %.2f\n", rektangelarea(bredd, hojd));
                break;
            }

            case 3: {
                int tal;
                printf("Ange ett tal: ");
                scanf("%d", &tal);
                skriv_multiplikationstabell(tal);
                break;
            }

            case 4: {
                int tal;
                printf("Ange ett heltal: ");
                scanf("%d", &tal);

                if (ar_primtal(tal)) {
                    printf("%d ar ett primtal.\n", tal);
                } else {
                    printf("%d ar inte ett primtal.\n", tal);
                }

                break;
            }

            case 5: {
                int fran, till;
                printf("Ange start och slut (t.ex. 1 20): ");
                scanf("%d %d", &fran, &till);
                skriv_fizzbuzz(fran, till);
                break;
            }

            case 6: {
                double a, b;
                char operatortecken;

                printf("Ange uttryck, t.ex. \"4 + 2\": ");
                scanf("%lf %c %lf", &a, &operatortecken, &b);

                printf("Resultat: %.2f\n",
                       berakna(a, b, operatortecken));
                break;
            }

            case 0:
                printf("Avslutar.\n");
                break;

            default:
                printf("Ogiltigt val, forsok igen.\n");
        }

    } while (val != 0);

    return 0;
}