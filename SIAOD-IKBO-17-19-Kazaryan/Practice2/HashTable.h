#pragma once
class HashTable {
	static const int default_size = 17; //��������� ������ �������
	constexpr static const double rehash_size = 0.75;
	struct Node {
		int key;
		int value;  //������ �������� � ������� � ������� �� ����� 
		bool freeNode;  //������� ���������� ��� �������� ������
	};
	Node* arr;
	int size;  //������� ��������� � ������� ��� ����� ���������
	int buffer_size; // ������ ������ �������, ������� ������ �������� ��� ������� ����� �������
	int size_all_non_nullptr; //������� ��������� � ��� ������ � ������� (� ������ ���������);
	//������
public:
	//�����������
	HashTable();
	//����������
	~HashTable();
	//������� ����� � �������
	bool Insert(const int value1, int key1);

	void Rehash();
	//����� Find
	int Find(int key);
	void Delete(int key);)



};