/*
    Program: Find the Unique Element Using XOR

    Description:
    This program uses the XOR operator to find the element
    that appears only once in a vector. All other elements
    occur exactly twice.

    XOR Properties:
    - a ^ a = 0
    - a ^ 0 = a
    - XOR is commutative and associative

    Example:
    Input:
    10 56 78 45 90 67 10 56 78 45 90

    Output:
    Unique Element: 67

    Author: Mayuri Bondge
    Language: C++
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Initialize vector
    vector<int> v = {
        10, 56, 78, 45, 90, 67,
        10, 56, 78, 45, 90
    };

    int result = 0;

    // Find the unique element using XOR
    for(int value : v)
    {
        result ^= value;
    }

    // Display the unique element
    cout << "Unique Element: " << result << endl;

    return 0;
}