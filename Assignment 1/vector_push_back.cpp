/*
    Program: Vector Push Back Example

    Description:
    This program demonstrates the basic implementation of a
    vector in C++. It uses the push_back() function to add
    elements dynamically into the vector.

    Concepts:
    - C++ Vector
    - push_back()
    - Vector Indexing
    - for Loop
    - Dynamic Storage

    Example:
    Input:
    No user input required.

    Output:
    10
    11
    12
    13
    14

    Author: Mayuri Bondge
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Create an empty integer vector
    vector<int> v;

    int num = 10;

    // Add five elements to the vector
    for(int i = 0; i < 5; i++)
    {
        v.push_back(num);
        num++;

        cout << v[i] << endl;
    }

    return 0;
}