#include <stdlib.h>
#include <iostream>
extern int *left_shift(int *vals, int len, int amount);

int main(int arg, char **argv){

    int my_array[] ={1,2,3,4,5,6,7,8,};
    int *pointer = my_array;
    pointer = left_shift(pointer,8,3);
    
    for(int i =0;i<8;i++){
    std::cout << *(pointer+i) << std::endl;    
    }

    return 0;
}