#pragma once
struct listType {
	int cartId;
	int itemCount;
	int enterQTime;
	int exitQTime;
};

struct Node {
	listType data;
	Node* nextPtr;
};

class LinkedList {
private:
	Node* headPtr;
public:
	LinkedList();
	void addElement(listType list);
	listType peek();
	void delElement();
	void printList();
	bool listIsEmpty();
	static int listCount;
};