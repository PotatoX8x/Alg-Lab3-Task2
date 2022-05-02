#include "Queue.h"

int QUEUE::maxlength = 10;

QUEUE::QUEUE() {
	front = 1;
	rear = maxlength;
	elements = new elementtype[maxlength];
}

QUEUE::~QUEUE() {
	delete[] elements;
}

int addone(int i) {
	return (i % QUEUE::maxlength)+1;
}

void QUEUE::MAKENULL() {
	front = 1;
	rear = maxlength;
}

bool QUEUE::EMPTY() {
	if (addone(rear) == front )
		return true;
	return false;
}

elementtype QUEUE::FRONT() {
	if (EMPTY()) {
		cout << "Queue is empty" << endl;
		system("pause");
	}
	else {
		return elements[front-1];
	}
}

void QUEUE::ENQUEUE(elementtype x) {
	if (addone(addone(rear)) == front) {
		cout << "Queue is full" << endl;
		system("pause");
	}
	else {
		rear=addone(rear);
		elements[rear-1] = x;
	}
}

void QUEUE::DEQUEUE() {
	if (EMPTY()) {
		cout << "Queue is empty" << endl;
		system("pause");
	}
	else {
		front=addone(front);
	}
}