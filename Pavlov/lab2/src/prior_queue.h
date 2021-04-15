#pragma once
#include <vector>
#include "vertex.h"

class PriorQueue {
private:
	std::vector<Vertex*> heap;

	void heapify(int i);// ����������� ���� � ��� ��������
	void stabilize();	// �������������
public:
	PriorQueue(Vertex* initial);
	void push(Vertex* elem);
	Vertex* top();
	void pop();
};