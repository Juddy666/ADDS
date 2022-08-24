#include <stdlib.h>
#include <iostream>

using namespace std;

int integers_in_range(int vals[], int length, int bottom, int top);

int main(int arg, char **argv){
    int my_array[] ={1,2,3,4,5,6,7,8,9};
    int value = integers_in_range(my_array,9,4,6);
    cout << value << endl;
    return 0;
}