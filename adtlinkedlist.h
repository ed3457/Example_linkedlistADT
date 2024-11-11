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

	node* first; // pointer to the first node, example on composition 
	int count; // how many nodes we have 
public:

	adtlinkedlist();// constructor 
	bool isEmpty(); // check if the list is empty or not. 
	int getLength(); // returns how many nodes 
	void insertAtStart(int data);// insert a node at the start
	void insertAtIndex(int data, int index);// insert a node at an index
	void printList();// print the info for all nodes 
	bool search(int data); // return true if the data is found 
	int getInfoAtFirst(); // return the first node
	int getInfoAtLast();// return the last node 
	void deleteAtStart();// delete the first node 
	int getMax();// returns the max number in the list
	int getAvgMaxMin();// returns the average of min/max in the list
	//void deleteLast();
	//void replace();
	// void reverseList(); 
	int countEvenNumbers();// this will return the number of even numbers in the list 
	//void deleteAtIndex(int index);
	void reset();// deletes all the nodes
	//void deleteMiddle();





};

