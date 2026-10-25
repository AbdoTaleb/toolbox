#include "verktyg.h"

double medelvarde_sensorregister(Sensormatning *reg,int antal) {
    
if(antal == 0) {

    return 0;
}

double summa = 0;

for(int i = 0; i < antal; i++) {

summa = summa + reg[i].varde;

}

return summa / antal;


}