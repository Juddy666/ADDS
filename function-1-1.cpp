#include <stdlib.h>
#include <iostream>

int *left_shift(int *vals, int len, int amount){

    for(int i =0; i<(len-amount);i++){
        *(vals+i) = *(vals+i+amount);
    }

    for(int i =len-amount; i<len;i++){
        *(vals+i) =0;
    }

    return vals;
}