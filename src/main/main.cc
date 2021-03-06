#include <iostream>
#include "src/lib/solution.h"
#include <vector>
using std::cout, std::endl, std::cin;
int main()
{
    Solution solution ;
    solution.PrintName();
    solution.PrintAge();

    vector<int> inputs = {1, 2, 3, 5};
    vector<int> inputs1 = {1, 2, 3, 5, 8};
    vector<int> inputs2 = {1};
    vector<int> inputs3 = {1, -2, 3};
    vector<int> inputs4 = {-1};
    vector<int> inputs5 = {};

    cout << "If Median = -1, Invalid input" << endl;
    // even
    cout << "inputs: {1, 2, 3, 5}, Median: " << solution.FindMedian(inputs) << endl;
    // odd
    cout << "inputs: {1, 2, 3, 5, 8}, Median: " << solution.FindMedian(inputs1) << endl;
    // size 1
    cout << "inputs: {1}, Median: " << solution.FindMedian(inputs2) << endl;
    // negative number in middle of vector
    cout << "inputs: {1, -2, 3}, Median: " << solution.FindMedian(inputs3) << endl;
    // size 1 of negative number 
    cout << "inputs: {-1}, Median: " << solution.FindMedian(inputs4) << endl;
    // empty vector
    cout << "inputs: {}, Median: " << solution.FindMedian(inputs5) << endl;

    cout << "Enter a number > 0 to compute factorial: ";
    int n = 0;
    cin >> n;
    while(n < 0){
        cout << "Invalid input. Please input number > 0" << endl;
        cin >> n;
    }

    cout << "Recursive Output: " << solution.RecursiveFactorial(n) << endl;
    cout << "Non-Recursive Output: " << solution.NonRecursiveFactorial(n) << endl;

    return EXIT_SUCCESS;
}