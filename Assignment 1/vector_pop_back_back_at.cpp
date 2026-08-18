/*
    Program: Vector pop_back(), back(), at() and size()

    Description:
    This program demonstrates common operations performed
    on a C++ vector. It initializes a vector with elements,
    removes the last element using pop_back(), accesses the
    current last element using back(), displays all elements
    using a range-based for loop, and accesses an element
    at a specific index using at().

    Concepts:
    - Vector initialization
    - size()
    - pop_back()
    - back()
    - at()
    - Range-based for loop
    - C++ STL Vector

    Author: Mayuri Bondge
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Initialize a vector
    vector<int> v = {10, 56, 78, 45, 90, 67, -78};

    // Display the initial size
    cout << "Initial Size: " << v.size() << endl;

    // Remove the last element
    v.pop_back();

    cout << "Size after pop_back(): " << v.size() << endl;

    // Display the current last element
    cout << "Last Element: " << v.back() << endl;

    // Display all elements
    cout << "Vector Elements:" << endl;

    for(int value : v)
    {
        cout << value << endl;
    }

    // Access element at index 0
    cout << "Element at index 0: " << v.at(0) << endl;

    return 0;
}