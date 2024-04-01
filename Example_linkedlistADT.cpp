// Example_linkedlistADT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "adtlinkedlist.h"
int main()
{
    std::cout << "Hello World!\n";

    adtlinkedlist list1;

    cout << list1.isEmpty() << endl;
    cout << list1.getLength() << endl;

    list1.insertAtStart(1);
    list1.insertAtStart(2);
    list1.insertAtStart(3);

    cout << list1.isEmpty() << endl;
    cout << list1.getLength() << endl;
    
}

