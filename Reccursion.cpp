

#include "Reccursion.h"
 int sum(int n){
    if(n == 1)
    return 1;

    return(n+sum(n-1));
}

