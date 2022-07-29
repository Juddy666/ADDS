#include <iostream>
#include <stdlib.h>

extern int num_count(int array[], int n, int number);

int main(int argc,char **argv)
{
	  int array[6] = {3,5,4,5,8,5};
std::cout << "The count is: " << num_count(array, 6, 5) << std::endl;
	return 0 ;
}
