#include <iostream>
#include <stdlib.h>
extern int maximum(int*,int);
int main(int argc,char **argv)
{
int array[6] = {3,5,4,5,-1,9};
std::cout << "The maximum is: " << maximum(array,6) << std::endl;
return 0 ;
}