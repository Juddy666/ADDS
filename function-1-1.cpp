#include <stdlib.h>
#include <iostream>

int *left_shift(int *vals, int len, int amount){
    int *new_ptr = new int[len];
    new_ptr = vals;
    for(int i =0; i<(len-amount);i++){
        *(new_ptr+i) = *(vals+i+amount);
    }

    for(int i =len-amount; i<len;i++){
        *(new_ptr+i) =0;
    }

    return new_ptr;
}