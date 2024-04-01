// Example_linkedlistADT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include "adtlinkedlist.h"
int main()
{
    try {
        std::cout << "Hello World!\n";

        adtlinkedlist list1;

        //cout << list1.isEmpty() << endl;
        //cout << list1.getLength() << endl;

        list1.insertAtStart(1);
        list1.insertAtStart(2);
        list1.insertAtStart(3);

        //cout << list1.isEmpty() << endl;
        //cout << list1.getLength() << endl;

       // list1.printList();

        //cout << list1.getInfoAtFirst();

        //cout << list1.getInfoAtLast();

        list1.reset();
        list1.printList();

    }

    catch (int x)
    {
        switch (x)
        {
        case 1:case 2:
            cout << "The list is empty!\n";
            break;
       
        }

    }

    catch (...)
    {
        cout << "General error!\n";

    }

}

