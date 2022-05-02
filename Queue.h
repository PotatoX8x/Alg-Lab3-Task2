#pragma once
#include <iostream>
using namespace std;

typedef char elementtype;

class QUEUE {
		elementtype* elements;
		int front;
		int rear;
	public:
		static int maxlength;
	
		QUEUE();
		~QUEUE();

		friend int addone(int);
		void MAKENULL();
		elementtype FRONT();
		void ENQUEUE(elementtype);
		void DEQUEUE();
		bool EMPTY();
};