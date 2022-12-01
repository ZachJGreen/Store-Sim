#pragma once
#include <vector>
using namespace std;

struct queueNodeData {
	int timeAvailable;
};

struct queueNode {
	queueNodeData data;
	queueNode* nextPtr;
};

struct queueData {
	int queueCount = 0;
	int totalIdleTime = 0;
	int totalOverTime = 0;
	int maxQueueLength = 0;
	int totalItems = 0;
	vector<int> cartList;
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