/*
    Program: Add Element to Vector Using push_back()

    Description:
    This program demonstrates how to add an element dynamically
    to a C++ vector using the push_back() function. It displays
    the vector size before and after inserting a new element.

    Concepts:
    - C++ Vector
    - push_back()
    - size()
    - Dynamic Memory Allocation
    - STL Vector

    Author: Mayuri Bondge
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Initialize a vector
    vector<int> v = {10, 56, 78, 45, 90, 67, -78};

    // Display initial size
    cout << "Initial Size: " << v.size() << endl;

    // Add a new element dynamically
    v.push_back(99);

    // Display updated size
    cout << "Size after push_back(): " << v.size() << endl;

    return 0;
}