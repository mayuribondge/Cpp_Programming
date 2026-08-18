/*
    Program: Vector Size and Capacity

    Description:
    This program demonstrates the size and capacity of a
    C++ vector. It shows how elements are added dynamically
    using push_back() and how the vector's size and capacity
    change during insertion.

    Concepts:
    - C++ Vector
    - push_back()
    - size()
    - capacity()
    - Dynamic Memory Allocation
    - STL Vector

    Author: Mayuri Bondge
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Create an empty vector
    vector<int> v;

    // Display initial size
    cout << "Initial Size: " << v.size() << endl;

    // Add elements dynamically
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    // Display size and capacity
    cout << "Size after push_back(): " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    return 0;
}