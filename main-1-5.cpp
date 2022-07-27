#include <iostream>
#include <stdlib.h>

extern int count_even(int);

int main(int argc,char **argv)
{
	int number = 45;
std::cout << "The count is: " << count_even(number) << std::endl;
	return 0 ;
}