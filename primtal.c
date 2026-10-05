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