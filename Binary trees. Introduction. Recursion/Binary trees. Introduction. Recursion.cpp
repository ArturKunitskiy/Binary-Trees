﻿﻿#include <iostream>
#include "task1.h"
#include "task2.h"
using namespace std;

int main()
{
	//1
	Fifo<int> a;
	a.Push(0);
	a.Push(1);
	a.Push(2);
	a.Print();

	Fifo<char> b;
	b.Push('a');
	b.Push('b');
	b.Push('c');
	b.Print();
	
	//2
	Lifo<int> c;
	c.push(0);
	c.push(1);
	c.push(2);
	c.print();

	Lifo<char> d;
	d.push('a');
	d.push('b');
	d.push('c');
	d.print();
}