#include <iostream>
#include <stdlib.h>

extern void two_five_nine(int array[], int n);

int main(int argc,char **argv){

	int array[6] = {3,2,2,5,9,9};
 two_five_nine(array,6);
	return 0 ;
}