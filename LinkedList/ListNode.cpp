#include "ListNode.h"

// Private
//ListNode *next = nullptr;
//int nodeValue = 0;

// Public
ListNode::ListNode(int val)
{
	nodeValue = val;
}
ListNode * ListNode::getNext()
{
	return next;
}
void ListNode::setNext(ListNode *temp)
{
	next = temp;
}
int ListNode::getValue()
{
	return nodeValue;
}
void ListNode::putValue(int val)
{
	nodeValue = val;
}
ListNode::~ListNode()
{
	//delete next;
}


