#pragma once
#include <iostream>
using namespace std; 
struct node
{
	int info; // data 

	node* link; // pointer to the next node 

};
class adtlinkedlist
{
private: 

	node* first; // pointer to the first node 
	int count;
public:

	adtlinkedlist();// constructor 
	bool isEmpty();
	int getLength();
	void insertAtStart(int data);
	void printList();
	bool search(int data);




};

