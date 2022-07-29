#include <iostream>
#include <stdlib.h>

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main(int argc,char **argv)
{
	 int array1[6] = {3,5,4,5,8,5};
     int array2[6] = {5,7,10,3,2,6};
std::cout << "The count is: " << sum_two_arrays(array1, array2, 6) << std::endl;
	return 0 ;
}