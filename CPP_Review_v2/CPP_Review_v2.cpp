// CPP_Review_v2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

#include "array_functions.h"

/* Driver function to test above functions */
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6 };

    // To print original array
    printArray(arr, 6);

    // Function calling
    rvereseArray(arr, 0, 5);

    cout << "Reversed array is" << endl;

    // To print the Reversed array
    printArray(arr, 6);

    return 0;
}

