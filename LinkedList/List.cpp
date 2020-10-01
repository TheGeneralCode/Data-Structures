#include "List.h"
// Public
List::List()
{

}
// Adds value to end of list
void List::appendValue(int val) // virtual
{
	ListNode *iterator = listHead;
	ListNode *end;
	end = new ListNode(val);

	if (isEmpty())
	{
		listHead = end;
		return;
	}
	else
	{
		while (iterator->getNext())
		{
			iterator = iterator->getNext();
		}
	}

	iterator->setNext(end);
	//delete iterator;
	//delete end;
}
bool List::containsValue(int val)
{
	ListNode *temp = listHead;
	while (temp)
	{
		if (temp->getValue() == val)
		{
			return true;
		}
		else
		{
			temp = temp->getNext();
		}
	}
	return false;
	delete temp;
}
// Adds value to beginning of list
void List::insertValue(int val) // virtual
{
	ListNode *newHead;
	newHead = new ListNode(val);
	newHead->setNext(listHead);
	listHead = newHead;
	//delete newHead;
}
bool List::isEmpty()
{
	return listHead == nullptr;
}
void List::removeValue(int val)
{
	ListNode *prev = nullptr;
	ListNode *cur = listHead;
	if (cur->getValue() == val)
	{
		listHead = cur->getNext();
	}
	else
	{
		while (!cur) 
		{
			if (cur->getValue() == val)
			{
				prev->setNext(cur->getNext());
			}
			else
			{
				prev = cur;
				cur = cur->getNext();
			}
		}
	}
	//delete prev;
	//delete cur;
}
void List::print()
{
	ListNode *iterator = listHead;
	while (iterator)
	{
		std::cout << iterator->getValue() << std::endl;
		iterator = iterator->getNext();
	}
}
List::~List() // Virtual
{
	ListNode *temp = listHead;
	while (temp)
	{
		std::cout << "Deleting val: " << temp->getValue() << std::endl;
		temp->~ListNode();
		temp = temp->getNext();
	}
}

// Protected
ListNode *List::getListHead()
{
	return listHead;
}
void List::setListHead(ListNode *temp)
{
	listHead = temp;
}
