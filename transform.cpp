//
#include <iostream>
#include <stdlib.h>
extern bool is_decending(int array[], int n);

int main(int argc,char **argv){
int array[6] = {7,6,4,5,3,1};
 std::cout << "The array decends: " << std::boolalpha << is_decending(array,6)<< std::endl;
return 0 ;
}