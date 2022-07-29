#include <iostream>
#include <stdlib.h>
extern bool is_ascending(int array[], int n);

int main(int argc,char **argv){
int array[6] = {0,2,4,5,7,9};
 std::cout << "The array ascends: " << std::boolalpha << is_ascending(array,6)<< std::endl;
return 0 ;
}