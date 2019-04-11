/*
 * =====================================================================================
 *
 *       Filename:  ItemToPurchase.cpp
 *
 *    Description:  Items to purchase library
 *
 *        Version:  1.0
 *        Created:  04/11/2019 09:49:51 AM
 *       Revision:  none
 *       Compiler (C):    gcc ItemToPurchase.cpp -o ItemToPurchase.cpp.out
 *       Compiler (C++):  g++ ItemToPurchase.cpp -o ItemToPurchase.cpp.out
 *
 *         Author:  Joe Trigueros (), Joetrigueros@mail.weber.edu
 *   Organization:  WSU
 *
 * =====================================================================================
 */
//For C++ Code
#include <iostream>
using namespace std;
#include "ItemToPurchase.h"
// Function Definitions


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  ItemToPurchase
 *  Description:  Constructor for Item to purchase.
 *  Set itemName = "none"
 *  itemPrice = 0, and itemQuantity = 0
 * =====================================================================================
 */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  SetName
 *  Description:  Set the name variable
 * =====================================================================================
 */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  SetPrice
 *  Description:  Set the Purchase price
 * =====================================================================================
 */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  SetQuantity
 *  Description:  Set the itm quantity
 * =====================================================================================
 */



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetName
 *  Description:  Get the name variable
 * =====================================================================================
 */



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetPrice
 *  Description:  Get the Purchase price
 * =====================================================================================
 */



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  GetQuantity
 *  Description:  Get the item quantity
 * =====================================================================================
 */



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  Print
 *  Description:  Print Item Purchased
 * =====================================================================================
 */
void ItemToPurchase::Print()
{
    cout << itemName << " " << itemQuantity << " @ $"
    << itemPrice << " = $" << itemPrice * itemQuantity << endl;
}
