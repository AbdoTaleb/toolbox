#include "verktyg.h"

int ar_primtal(int tal) {
    if (tal < 2) {
        return 0; // inte primtal..
    }  
    
    for  (int i = 2; i < tal; i++) {
        if (tal % i == 0) {
            return 0; // inte primtal..
        }
    }
    return 1; // primtal
}

int raknar_primtal_i_array(int tal[], int antal) {
    int antal_primtal = 0;
    for (int i = 0; i < antal; i++) {
        if (ar_primtal(tal[i])) {
            antal_primtal++;
        }
    }
    return antal_primtal;
}