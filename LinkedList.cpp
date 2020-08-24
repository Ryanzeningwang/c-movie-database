
#include <iostream> 
#include "LinkedList.h"
using namespace std;


LinkedList::LinkedList()
{
    top = NULL;
    count=0;
}

void LinkedList::insert(Object *newItem)
{
	top = new Node(newItem, top);
	count++;
}


int LinkedList::size(){
    return count;

}

