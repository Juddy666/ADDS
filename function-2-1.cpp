#include <stdlib.h>
#include <iostream>

int fishing_fine_lookup(int over){
    int fine;
    if(over == 0){
        fine =0;
    }
    else if(over>0&&over<10){
        fine = 180;
    }

    else if(over>=10&&over<20){
        fine = 406;
    }
    else if(over>=20&&over<30){
        fine = 825;
    }
    else if(over>=30&&over<45){
        fine = 1500;
    }
    else if(over >=45){
        fine = 1690;
    }
    return fine;
}