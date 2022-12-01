#include "Queue.h"
#include <iostream>
using namespace std;
Queue::Queue() {
	front = nullptr;
	rear = nullptr;
}

void Queue::push(queueNodeData data) {
	queueNode* newNode = new queueNode;
	newNode->data = data;
	newNode->nextPtr = nullptr;

	if (is_empty()) {
		front = newNode;
		rear = newNode;
	}
	else {
		rear->nextPtr = newNode;
		rear = newNode;
	}
}
queueNodeData Queue::pop() {
	if (is_empty()) {
		return;
	}
	else {
		queueNodeData tempData = front->data;
		queueNode* tempPtr = front;

		front = front->nextPtr;
		if (front == nullptr)
			rear = nullptr;
		delete tempPtr;
		tempPtr = nullptr;

		return tempData;
	}
}

/************************IMPLEMENT THIS***********************/
queueNodeData Queue::peek() {
	queueNodeData toBeImplemented;
	return toBeImplemented;

}
bool Queue::is_empty() { 
	return (front == nullptr) && (rear = nullptr); 
}
void Queue::printQueue() {
	queueNode* currNode = front;
	while (currNode != nullptr) {
		cout << currNode->data << endl;
		currNode = currNode->nextPtr;
	}
}