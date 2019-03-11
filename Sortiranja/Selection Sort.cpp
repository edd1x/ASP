#include <iostream>
using namespace std;

template<class T>
void SelectionSort(T niz[], int size) {
	int j, minIndex;
	T temp;
	for (size_t i = 0; i < size - 1; i++)
	{
		minIndex = i;
		for (size_t j = i + 1; j < size; j++)
			if (niz[j] < niz[minIndex])
				minIndex = j;
		if (minIndex != i) {
			temp = niz[i];
			niz[i] = niz[minIndex];
			niz[minIndex] = temp;
		}
	}
}


void main() {

	int niz[6] = { 5,7,1,2,8,3 };
	SelectionSort(niz, 6);
	for (size_t i = 0; i < 6; i++)
	{
		cout << niz[i] << " ";
	}

	system("pause>0");
}