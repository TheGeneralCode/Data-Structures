/*
 * ListNode.h
 *
 *  Created on: Apr 4, 2018
 *      Author: cameron
 */

#ifndef LISTNODE_H_
#define LISTNODE_H_

class ListNode
{
private:
	ListNode *next = nullptr;
	int nodeValue = 0;
public:
	ListNode(int);
	ListNode *getNext();
	void setNext(ListNode*);
	int getValue();
	void putValue(int);
	virtual ~ListNode();
};

#endif /* LISTNODE_H_ */
