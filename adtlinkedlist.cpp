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

void adtlinkedlist::insertAtIndex(int data, int index)
{    // handle the case when the list is empty
	if (count == 0)
	{
		insertAtStart(data);
		return; 
	}

	// validation : index should be less than or equal to count , no negative indexes 
	if (index < 0 || index > count)
		throw 3; 
	// 1. create a new node
	node* newNode = new node();
	newNode->info = data;
    // 2. Loop until you find the proper index 
	int currentIndex = 0;
	node* current = first;

	while (currentIndex != index-1)
	{
		currentIndex++;
		current = current->link;
	}

	// 3. Change the pointers 
	newNode->link = current->link;
	current->link = newNode;

	//4. increment the count 
	count++;
	
}

void adtlinkedlist::printList()
{
	// 1. define a node that will be used to scan the list, we can call it current

	node* current = first; 

	// 2. use while loop to scan the list
	while (current !=NULL)
	{
		// 3. print the info in the current node
		cout << current->info << endl;

		current = current->link;

	}

}

bool adtlinkedlist::search(int data)
{
	// 1. define a node that will be used to scan the list, we can call it current

	node* current = first;

	// 2. use while loop to scan the list
	while (current != NULL)
	{
		// 3. find if the data matches the info 
		if (current->info == data)
			return true;

		current = current->link;

	}

	return false;
}

int adtlinkedlist::getInfoAtFirst()
{
	if (isEmpty())
		throw 1;
	return first->info;
}

int adtlinkedlist::getInfoAtLast()
{
	if (isEmpty())
		throw 2;
	node* current = first;

	// 2. use while loop to scan the list
	while (current->link != NULL)
	{
		current = current->link;

	}

	return current->info;
}

void adtlinkedlist::deleteAtStart()
{  // validation 
	if (count == 0)
	{
		throw 1;
	}

	// 1. point to the first node 
	node* current = first;

	// 2. change the first pointer to the next node
	first = first->link;

	//3. delete the first node
	delete current;
	//4. change the count 
	count--;
}

void adtlinkedlist::reset()
{
	node* current1 = first;
	node* current2 = first;
	while (count != 0)
	{
		current2 = current1;
		current1 = current1->link;

		delete current2; 
		count--;
	}

	first = NULL; 

	// or 
	//while (!list1.isEmpty())
	//list1.deleteAtStart();
}
