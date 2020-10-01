#include "ListNode.h"
#include <iostream>
#ifndef LIST_H_
#define LIST_H_

class List
{
private:
	ListNode *listHead = nullptr;

protected:
	ListNode *getListHead();
	void setListHead(ListNode *);

public:
	List();
	virtual void appendValue(int);
	bool containsValue(int);
	virtual void insertValue(int);
	bool isEmpty();
	void removeValue(int);
	void print();
	virtual ~List();
};
#endif /* LIST_H_ */
