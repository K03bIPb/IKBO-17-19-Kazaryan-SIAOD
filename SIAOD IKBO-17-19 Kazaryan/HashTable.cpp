#include "HashTable.h"



HashTable::HashTable()
{
	buffer_size = default_size;
	size = 0;
	arr = new Node[buffer_size];
	for (int i = 0; i < buffer_size; i++)
		arr[i].freeNode = true;
}

HashTable::~HashTable()
{
	delete[] arr;
}
