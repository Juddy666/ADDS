#include <iostream>
#include <stdlib.h>

extern int min_element(int array[], int n);

int main(int argc,char **argv)
{
	  int array[6] = {3,5,4,5,-1,5};
std::cout << "The minimum is: " << min_element(array,6) << std::endl;
	return 0 ;
}