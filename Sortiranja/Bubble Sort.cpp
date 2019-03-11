#include <iostream>
using namespace std;

template<class T>
void BubbleSort(T niz[], int size) {
	bool promjena = true;
	T temp;
	int j = 0;
	while (promjena)
	{
		promjena = false;
		j++;
		for (size_t i = 0; i < size - j; i++)
		{
			if (niz[i] > niz[i + 1]) {
				temp = niz[i];
				niz[i] = niz[i + 1];
				niz[i + 1] = temp;
				promjena = true;
			}
		}
	}
}


void main() {

	int niz[6] = { 5,7,1,2,8,3 };
	BubbleSort(niz, 6);
	for (size_t i = 0; i < 6; i++)
	{
		cout << niz[i] << " ";
	}
	
	system("pause>0");
}