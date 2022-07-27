#include <iostream>
#include <stdlib.h>

extern int sumtwo(int*,int*,int);

int main(int argc,char **argv)
{
	 int array1[6] = {3,5,4,5,8,5};
     int array2[6] = {5,7,10,3,2,6};
std::cout << "The count is: " << sumtwo(array1, array2, 6) << std::endl;
	return 0 ;
}