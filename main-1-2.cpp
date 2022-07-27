#include <iostream>
#include <stdlib.h>

extern double average(int*,int);

int main(int argc,char **argv)
{
    int array[6] = {3,5,4,7,8,10};
std::cout << "The average is: " << average(array, 6) << std::endl;
	return 0 ;
}