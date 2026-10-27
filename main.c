#include <stdio.h>
#include <stdlib.h>
#include "verktyg.h"

static void skriv_meny(void) {
    printf("\n=== Gruppens verktygslada ===\n");
    printf("1. Temperaturomvandling (Celsius -> Fahrenheit)\n");
    printf("2. Rektangelns area\n");
    printf("3. Multiplikationstabell\n");
    printf("4. Kontrollera om ett tal ar ett primtal\n");
    printf("5. FizzBuzz for ett intervall\n");
    printf("6. Enkel rakning (+, -, *, /)\n");
    printf("7. Konvertera en serie Celsius-varden till Fahrenheit\n");
    printf("8. Storst rektangel i en lista\n");
    printf("9. Flera multiplikationstabeller\n");
    printf("10. Rakna primtal i en lista\n");
    printf("11. FizzBuzz-sammanfattning\n");
    printf("12. Byt plats pa tva tal\n");
    printf("13. Lagg till en matning i matloggen\n");
    printf("14. Ta bort senaste matningen\n");
    printf("15. Skriv ut matloggen\n");
    printf("16. Berakna statistik for matloggen\n");
    printf("17. Kopiera matloggen\n");
    printf("18. Frigor matloggen\n");
    printf("19. Lagg till en sensormatning\n");
    printf("20. Skriv ut sensorregistret\n");
    printf("21. Skriv ut medelvarde for sensorregistret\n");
    printf("22. Hitta en sensor via namn\n");
    printf("23. Spara sensorregistret till fil\n");
    printf("0. Avsluta\n");
    printf("Val: ");
}

int main(void) {
    int val;
    double *matlogg = NULL;
    int matlogg_antal = 0;
    Sensormatning *sensorregister = NULL;
    int sensorregister_antal = 0;

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




            case 9: {
                int tal[20];
                int antal;
                printf("Hur manga tabeller vill du skriva ut?(max 20) ");
                scanf("%d", &antal);
                for (int i = 0; i < antal; i++) {
                    printf("Tal %d: ", i + 1);
                    scanf("%d", &tal[i]);
                }
                skriv_flera_tabeller(tal, antal);
                break;
            }

            case 10: {
                int tal[20];
                int antal;
                printf("Hur manga tal vill du kontrollera?(max 20) ");
                scanf("%d", &antal);
                for (int i = 0; i < antal; i++) {
                    printf("Tal %d: ", i + 1);
                    scanf("%d", &tal[i]);
                }
                printf("Antal primtal: %d\n", raknar_primtal_i_array(tal, antal));
                break;
            }

            case 12: {
                double a, b;

                printf("Ange tva tal, t.ex. \"3 7\": ");
                scanf("%lf %lf", &a, &b);

                printf("Fore: a = %.2f, b = %.2f\n", a, b);

                byt_plats(&a, &b);

                printf("Efter: a = %.2f, b = %.2f\n", a, b);
                break;
                }
                

            case 8: {
                double bredder[20], hojder[20];
                int antal;
                double storsta_area;
                int index;

                printf("Hur manga rektanglar vill du jamfora (max 20)? ");
                scanf("%d", &antal);

                for (int i = 0; i < antal; i++) {
                    printf("Rektangel %d, bredd och hojd: ", i + 1);
                    scanf("%lf %lf", &bredder[i], &hojder[i]);
                }

                storst_rektangel(bredder, hojder, antal, &storsta_area, &index);

                printf("Storst area ar %.2f, rektangel nummer %d\n",
                    storsta_area, index + 1);
                break;
                }

                            case 7: {
                double matningar[20];
                int antal;

                printf("Hur manga temperaturer vill du konvertera (max 20)? ");
                scanf("%d", &antal);

                if (antal < 1 || antal > 20) {
                    printf("Ange mellan 1 och 20 temperaturer.\n");
                    break;
                }

                for (int i = 0; i < antal; i++) {
                    printf("Temperatur %d i Celsius: ", i + 1);
                    scanf("%lf", &matningar[i]);
                }

                konvertera_serie(matningar, antal);

                printf("Temperaturer i Fahrenheit:\n");
                for (int i = 0; i < antal; i++) {
                    printf("%.2f F\n", matningar[i]);
                }

                break;
            }

            case 11: {
                int fran, till;
                char sammanfattning[100];

                printf("Ange start och slut (t.ex. 1 20): ");
                scanf("%d %d", &fran, &till);
                
                fizzbuzz_sammanfattning(fran, till, sammanfattning);
                printf("%s\n", sammanfattning);
                break;
            }

            case 16: {
                double min, max, medel;

                berakna_loggstatistik(matlogg, matlogg_antal,
                                      &min, &max, &medel);

                printf("Minsta varde: %.2f\n", min);
                printf("Storsta varde: %.2f\n", max);
                printf("Medelvarde: %.2f\n", medel);
                break;
            }
            case 13: {
                double varde;

                printf("Ange matvarde att lagga till: ");
                scanf("%lf", &varde);

                matlogg = lagg_till_matning(matlogg, &matlogg_antal, varde);

                printf("Matloggen innehaller nu %d matning(ar).\n", matlogg_antal);
                break;
            }

            case 14:
                matlogg = ta_bort_senaste_matning(matlogg, &matlogg_antal);
                printf("Matloggen innehaller nu %d matning(ar).\n", matlogg_antal);
                break;

            case 15:
                skriv_matlogg(matlogg, matlogg_antal);
                break;

            
            case 18: {
                frigor_matlogg(matlogg);
                matlogg = NULL;
                matlogg_antal = 0;
                printf("Matloggen ar frigjord.\n");
                break;
            }
            case 19: {
                char namn[50];
                double varde;

                printf("Namn pa sensorn (utan mellanslag): ");
                scanf("%49s", namn);

                printf("Matvarde: ");
                scanf("%lf", &varde);

                sensorregister = lagg_till_sensormatning(
                    sensorregister,
                    &sensorregister_antal,
                    namn,
                    varde
                );

                printf("Sensorregistret innehaller nu %d post(er).\n",
                    sensorregister_antal);

                break;
            }

            case 17: {
                int kopia_antal = matlogg_antal;
                double *kopia = kopiera_matlogg(matlogg, matlogg_antal);
                printf("Kopierade %d matning(ar) till en ny logg:\n", kopia_antal);
                skriv_matlogg(kopia, kopia_antal);
                frigor_matlogg(kopia);
                printf("(Kopian ar nu frigjord igen -- den var bara for testet.)\n");
                break;
                }

            case 20:
                skriv_sensorregister(sensorregister, sensorregister_antal);
                break;

            case 21: {
                printf("Medelvarde : %.2f \n",medelvarde_sensorregister(sensorregister,sensorregister_antal));
                break;

            }

            case 23: {
                char filnamn[100];
                printf("Filnamn att spara till: ");
                scanf("%99s", filnamn);
                spara_sensorregister(filnamn, sensorregister, sensorregister_antal);
                printf("Sensorregistret sparat till %s.\n", filnamn);
                break;
                }


            case 22: {
                char namn[50];

                printf("Vilket namn vill du soka efter? ");
                scanf("%49s", namn);

                int index = hitta_sensor(sensorregister, sensorregister_antal, namn);

                if (index == -1) {
                    printf("Hittade ingen sensor med det namnet \"%s\".\n", namn);

                } else {
                    printf("Hittade \"%s\" pa plats %d, varde %.2f\n",
                       namn, index, sensorregister[index].varde);
                }

                break;
            }

            case 0:
                if (matlogg != NULL) {
                    frigor_matlogg(matlogg);
                    matlogg = NULL;
                    matlogg_antal = 0;
                }
                free(sensorregister);
                sensorregister = NULL;
                sensorregister_antal = 0;
                printf("Avslutar.\n");
                break;

            default:
                printf("Ogiltigt val, forsok igen.\n");
        }

    } while (val != 0);

    return 0;
}