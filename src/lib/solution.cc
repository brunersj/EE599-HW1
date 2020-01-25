#include "solution.h"
#include <iostream>
using namespace std;

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

// Find median of non-negative vector
double Solution::FindMedian(vector<int> inputs){

  sort(inputs.begin(), inputs.end());
  
  // check if vector is valid size
  if(inputs.size() < 1){
    return -1;
  }
  // if negative numbers exist
  if (inputs[0] < 0){
    return -1;
  }
  if(inputs.size() == 1){
    return inputs[0];
  }
  else{
    // if even number vector
    if (inputs.size() % 2 == 0){
      return (inputs[inputs.size()/2 - 1] + inputs[inputs.size()/2]) / 2.0 ;
    }
    // if odd number vector
    else {
      return inputs[(inputs.size() / 2)];
    }
    
  }


}