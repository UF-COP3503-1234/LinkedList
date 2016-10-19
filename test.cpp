#include <iostream>
#include "linkedlist.h"
using namespace std;

int main() {
	cout << "Hi" << endl;
	LinkedList ll = LinkedList();
	cout << ll.getSize() << endl;
	ll.insertAt(0,6);
	cout << ll.getSize() << endl;
	ll.insertAt(4,0);
	ll.insertAt(4,0);
	ll.insertAt(4,0);
	ll.insertAt(4,0);
	ll.updateAt(2,1);
	ll.deleteAt(0);
	cout << ll.findAt(0) << endl;
	cout << ll.findAt(1110) << endl;	
	ll.print();	
	cout << "Search for 2: " << ll.search(2) << endl;
}	
