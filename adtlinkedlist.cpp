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
	if (index == 0)
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
	// validation:
	
	if (first == NULL)
	{
		cout << "List is empty!\n";
		return; 

	}
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
{   //validation:

	if (first == NULL)
		return false;
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

int adtlinkedlist::getMax()
{    // validation, list has no elements
	throw 1; // raise an exception 
      
	// 1. define a node that will be used to scan the list, we can call it current

	node* current = first;
	int max;
	if (first != NULL)
		max = first->info;
	else
		throw 10;
	// 2. use while loop to scan the list
	while (current != NULL)
	{
		// 3. print the info in the current node
		if (current->info > max)
			max = current->info;

		current = current->link;

	}
	return max;
}

int adtlinkedlist::getAvgMaxMin()
{
	// 1. define a node that will be used to scan the list, we can call it current

	node* current = first;
	int max;
	int min;
	if (first != NULL)
	{
		max = first->info;
		min = first->info;
	}
	else
		throw 10;
	// 2. use while loop to scan the list
	while (current != NULL)
	{
		// 3. print the info in the current node
		if (current->info > max)
			max = current->info;

		if (current->info < min)
			min = current->info;

		current = current->link;

	}
	return (max+min);
}

int adtlinkedlist::countEvenNumbers()
{
	node* current = first;
	int count = 0;

	
	while (current != NULL)
	{
		if (current->info % 2 == 0)
			count++;

		current = current->link;

	}
	return count; 
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


