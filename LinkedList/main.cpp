#include "List.h"
#include "ListNode.h"
#include <iostream>
int main () {
	List *list = new List();
	std::cout << "Appending some values to my list " << std::endl;
	list->appendValue(1);
	list->appendValue(2);
	list->appendValue(3);
	list->appendValue(4);
	list->appendValue(5);
	list->appendValue(6);
	list->appendValue(7);

	list->print();
	std::cout << "\n Inserting a value into my list " << std::endl;
	list->insertValue(99);
	list->print();

	
	bool result = list->containsValue (7);
	std::cout << "\n The value 7 is contained in mylist: " << result <<
		 std::endl;

	std::cout << "\n Removing a value from my list (2)" << std::endl;
	list->removeValue(2);
	list->print();

	std::cout << "\n Removing a value from my list (99)" << std::endl;
	list->removeValue(99);
	list->print();

	std::cout << "\n Removing a value from my list (1)" << std::endl;
	list->removeValue(1);
	list->print();

	delete list;
	system("pause");
	return 0;
}
