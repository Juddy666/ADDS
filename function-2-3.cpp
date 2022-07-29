#include <iostream>
#include <stdlib.h>
void two_five_nine(int array[], int n){
    int two_count = 0;
    int five_count = 0;
    int nine_count = 0;
    
    for(int i = 0;i<n;i++){
    int element = array[i];
    switch (element){
        case 2 :
        two_count = two_count +1;
        break;
        
        case 5 :
        five_count =  five_count +1;
        break;

        case 9 :
        nine_count = nine_count +1;
        break;

    }
}
std::cout <<"2:"<<two_count<<";5:"<<five_count<<";9:"<<nine_count<<";"<< std::endl;
	
}