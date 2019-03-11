#include <iostream>
using namespace std;

template<class T>
void InsertionSort(T niz[], int size) {
	int j;
	T temp;
	for (size_t i = 1; i < size; i++)
	{
		j = i;
		while (j > 0 && niz[j - 1] > niz[j])
		{
			temp = niz[j - 1];
			niz[j - 1] = niz[j];
			niz[j] = temp;
			j--;
		}
	}
}
void main() {

	int niz[6] = { 5,7,1,2,8,3 };
	InsertionSort(niz, 6);
	for (size_t i = 0; i < 6; i++)
	{
		cout << niz[i] << " ";
	}

	system("pause>0");
}