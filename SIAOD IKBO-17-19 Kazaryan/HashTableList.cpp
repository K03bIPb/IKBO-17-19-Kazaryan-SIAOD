#include "HashTableList.h"



HashTableList::HashTableList()
{
	buffer_size = default_size;
	size = 0;
	arr = new Node*[buffer_size];
}
HashTableList::~HashTableList()
{
	for (int i = 0; i < default_size; i++)
		delList(arr[i]);
	delete arr;
	//удалить список 
}

void HashTableList::delList(Node* L)
{
	Node* q = L, *q1;
	while (q != 0) {
		q1 = q->next;
		delete q;
		q = q1;
	}
}
