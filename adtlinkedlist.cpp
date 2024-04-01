#include "adtlinkedlist.h"


adtlinkedlist::adtlinkedlist()
{
	count = 0;
	first = NULL; 
}

bool adtlinkedlist::isEmpty()
{
	//return (count == 0);
	return (first == NULL);
}

int adtlinkedlist::getLength()
{
	return count;
}

void adtlinkedlist::insertAtStart(int data)
{
	// 1. create a node 
	node* newNode = new node();
	newNode->info = data;

	// 2. have the link for the new node pointing to what the first pointer is pointing to 
	newNode->link = first;
	// 3. have the first pointer pointing to the new node
	first = newNode;
	// 4. increment the count 
	count++;

}
