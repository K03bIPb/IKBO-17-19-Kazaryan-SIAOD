#pragma once
class HashTableList {
	static const int default_size = 17; //��������� ������ �������
	constexpr static const double rehash_size = 0.75;
	struct Node {
		int key;
		int value;  //������ �������� � ������� � ������� �� ����� 
		Node *next;  //������ �� ��������� ����
	};
	Node** arr;
	int size;  //������� ��������� � ������� ��� ����� ���������
	int buffer_size; // ������ ������ �������, ������� ������ �������� ��� ������� ����� �������
	int size_all_non_nullptr; //������� ��������� � ��� ������ � ������� (� ������ ���������);
	//������
public:
	//�����������
	HashTableList();
	//����������
	~HashTableList();
	//������� ����� � �������
	bool Insert(const int value1, int key1);

	void Rehash();
	//����� Find
	int Find(int key);
	void Delete(int key);
	void delList(Node* L);



};