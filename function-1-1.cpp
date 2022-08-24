#include <stdlib.h>
#include <iostream>

int *left_shift(int *vals, int len, int amount){

    for(int i =0; i<(len-amount);i++){
        *(vals+i) = *(vals+i+amount);
    }

    for(int i =len; i >=amount;i--){
        *(vals+i-1) = 0;
    }

    return vals;
}