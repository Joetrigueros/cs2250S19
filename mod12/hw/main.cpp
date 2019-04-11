/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/11/2019 09:49:51 AM
 *       Revision:  none
 *       Compiler (C):    gcc main.cpp -o main.cpp.out
 *       Compiler (C++):  g++ main.cpp -o main.cpp.out
 *
 *         Author:  Joe Trigueros (), Joetrigueros@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//For C++ Code
#include <iostream>
#include <iomanip>
#include "ItemToPurchase.h"
using namespace std;

// Main Function
int main(int argc, char* argv[])
{
    int i;
    const int NUM_ITEMS = 2;
    string name;
    int price;
    int quantity;
    double total;
    ItemToPurchase item1;
    ItemToPurchase item2;

    for(i = 0; i < NUM_ITEMS; ++i)
    {
        cout << "Item " << i + 1 << endl;
        cout << "Enter the item name:" << endl;
        cin.ignore(1000, '\n');
        getline(cin, name);

        cout << "Enter the item price:" << endl;
        cin >> price;

        cout << "Enter the item quantity:" << endl;
        cin >> quantity;
        cout << endl;

        // Set the object values for 1

        // Set the Object values for 2
        
        
        
        cin.ignore();
    }

    // Calculate the total
    
    // Print Total
    cout << "TOTAL COST" << endl;
    item1.Print();
    item2.Print();
    cout << endl;
    cout << "Total: $" << total << endl;


    return 0;
}
