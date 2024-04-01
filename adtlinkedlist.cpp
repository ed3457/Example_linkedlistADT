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
