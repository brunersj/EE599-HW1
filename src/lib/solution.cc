#include "solution.h"
#include <iostream>
using std::vector;

void Solution::PrintName() { 
  std::cout << "Name: Sam Bruner" << std::endl;; 
}
void Solution::PrintAge(){
  std::cout << "Age: 22" << std::endl;
}

//Question 3
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


} // End find median

// Question 6
int Solution::RecursiveFactorial(int n) {
  if (n < 0){ // invalid input
    return -1;
  }
  else if (n == 0 || n == 1) // base case
    return 1;
  else
    return n * RecursiveFactorial(n-1);
}

int Solution::NonRecursiveFactorial(int n) {
  int factorial = 1;
  if (n < 0){ // invalid input
    return -1;
  }
  // base case
  else if (n == 0 || n == 1){
    return factorial;
  }
  else{
    while(n > 1){
      factorial *= n;
      n--;
    }
    return factorial;
  }
}
