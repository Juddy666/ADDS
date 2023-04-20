#include "RecursiveBinarySearch.h"
#include <vector>

bool RecursiveBinarySearch::search(std::vector<int> list, int target){
  if(list.empty()){
    return false;
  }

  int midpoint = list.size() /2;
    if(list[midpoint] == target){
      return true;}
       
  
  else if (target < list[midpoint]) {
      std::vector<int> left(list.begin(), list.begin() + midpoint);
        return search(left, target);}

  else {
        std::vector<int> right(list.begin() + midpoint + 1, list.end());
        return search(right, target);
    }
}
