#include <iostream>
#include <stdlib.h>

extern int count_evens(int number);

int main(int argc,char **argv)
{
	int number = 45;
std::cout << "The count is: " << count_evens(number) << std::endl;
	return 0 ;
}