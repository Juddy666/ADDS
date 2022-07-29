#include <iostream>
#include <stdlib.h>
extern int max_element(int array[], int n);
int main(int argc,char **argv)
{
int array[6] = {3,5,4,5,-1,9};
std::cout << "The maximum is: " << max_element(array,6) << std::endl;
return 0 ;
}