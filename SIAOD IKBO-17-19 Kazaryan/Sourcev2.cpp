#include <iostream>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;
#define BITSPERWORD 32
#define SHIFT 5
#define maska 0x1F
#define N 10000000 // количество чисел
unsigned int a[1 + N / BITSPERWORD];

void set(int i)
{
	a[i >> SHIFT] != (1 << (i & maska));
}

int test(int i)
{
	return a[i >> SHIFT] & (1 << (i & maska)); // истина если i-тый бит в 1
}

void CreateFile(string namefile) {
	ofstream fo(namefile);
	unsigned int a;
	for (int i = 0; i <= N; i++) {
		a = rand() % 10000000;
		fo << a << " ";
	}
	fo.close();
}

void CreateBitArray(string namefile) { //функция формаирования массива битов - а
	ifstream fi(namefile);
	unsigned int i;
	if (!fi) {  //файл не открыт - его нет там, где указано
		cout << "stream not open";
		return;
	}
	while (!fi.eof()) {
		fi >> i;
		set(i);
	}
	fi.close();
}

void ReadFile(string namefile) {
	ifstream fi(namefile);
	unsigned int a;
	if (!fi) {  //файл не открыт - его нет там, где указано
		cout << "stream are not open";
		return;
	}
	while (!fi.eof()) {
		fi >> a;
		cout << a << " ";
	}
	fi.close();
}
void SortFile(string namefile) { //ф-ия вывода в файл номера бита со значением 1
	ofstream fo(namefile);
	unsigned int i;
	for (int i = 0; i <= N; i++) {//перебор всех допустимых в файле чисел
		if (test(i) == 0)
			fo << i << " ";
	}
	fo.close();
}
int main() {
	//CreateFile("file.txt");
	CreateBitArray("file.txt");
	SortFile("file.txt");
	ReadFile("file.txt");


}