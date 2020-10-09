#pragma once
class HashTable {
	static const int default_size = 17; //начальный размер таблицы
	constexpr static const double rehash_size = 0.75;
	struct Node {
		int key;
		int value;  //индекс элемента в массиве с данными по ключу 
		bool freeNode;  //признак свободного или занятого адреса
	};
	Node* arr;
	int size;  //сколько элементов в массиве без учета удаленных
	int buffer_size; // размер самого массива, сколько памяти выделено под хранене нашей таблицы
	int size_all_non_nullptr; //сколько элементов у нас сейчас в массиве (с учетом удаленных);
	//методы
public:
	//конструктор
	HashTable();
	//деструктор
	~HashTable();
	//вставка ключа в таблицу
	bool Insert(const int value1, int key1);

	void Rehash();
	//метод Find
	int Find(int key);
	void Delete(int key);)



};