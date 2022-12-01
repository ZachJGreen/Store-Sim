#pragma once
struct queueNodeData {
	int timeAvailable;
};

struct queueNode {
	queueNodeData data;
	queueNode* nextPtr;
};

class Queue {
private:
	queueNode* front;
	queueNode* rear;
public:
	Queue();
	void push(queueNodeData data);
	queueNodeData pop();
	queueNodeData peek();
	bool is_empty();
	void printQueue();
};