#include <iostream> 
#include "Object.h"
#include "Node.h"
using namespace std;

class LinkedList
{
private:
	Node *top;
	int count;
public:
	LinkedList();
	//void print();
	void insert(Object *newItem);
	int size();
	//int findActor(string fName, string lName,string movieName, int movieYear);
};
#pragma once
