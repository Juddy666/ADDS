#include "Truckloads.h"

int Truckloads::numTrucks(int numCrates, int loadSize){
    if (numCrates <= loadSize){
        return 1;
    }

        int right = numCrates/2 + numCrates%2;
        int left = numCrates/2;

    return numTrucks(right,loadSize) + numTrucks(left,loadSize);
}