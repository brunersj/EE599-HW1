#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>
#include <algorithm>
using std::vector;

class Solution {
public:
  void PrintName();
  void PrintAge();
  double FindMedian(vector<int> inputs);
  int RecursiveFactorial(int n);
  int NonRecursiveFactorial(int n);
};

#endif