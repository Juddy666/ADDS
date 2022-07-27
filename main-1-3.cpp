#include <iostream>
#include <stdlib.h>

extern int count(int*,int,int);

int main(int argc,char **argv)
{
	  int array[6] = {3,5,4,5,8,5};
std::cout << "The count is: " << count(array, 6, 5) << std::endl;
	return 0 ;
}
