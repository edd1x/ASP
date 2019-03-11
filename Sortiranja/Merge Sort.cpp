#include <iostream>
using namespace std;

void Merge(int Temp[], int Element[], const int list1, const int size1,
	const int list2, const int size2)
{
	int i = list1, j = list2, k = list1;

	while (i < list1 + size1 && j < list2 + size2)
	{
		if (Temp[i] < Temp[j])
			Element[k++] = Temp[i++];
		else
			Element[k++] = Temp[j++];
	}

	while (i < list1 + size1)
		Element[k++] = Temp[i++];
	while (j < list2 + size2)
		Element[k++] = Temp[j++];
	for (k = list1; k < list1 + size1 + size2; k++)
		Temp[k] = Element[k];
}

void MergeSort(int Temp[], int Element[], const int list1, const int size)
{
	int list2, size1, size2;

	if (size > 1)
	{
		list2 = list1 + size / 2;
		size1 = list2 - list1;
		size2 = size - size1;
		MergeSort(Temp, Element, list1, size1);
		MergeSort(Temp, Element, list2, size2);
		Merge(Temp, Element, list1, size1, list2, size2);
	}
}


void main() {

	int A[14] = { 52,1,5,7,22,88,43,21,25,62,3,8,95,27 };
	int B[14] = { 52,1,5,7,22,88,43,21,25,62,3,8,95,27 };

	cout << "NESORTIRANI NIZ:" << endl;
	for (int i = 0; i < 14; i++)
	{
		cout << A[i] << endl;
	}
	MergeSort(B, A, 0, 14);
	cout << endl << "SORTIRANI NIZ" << endl;
	for (int i = 0; i < 14; i++)
	{
		cout << B[i] << endl;
	}


	system("pause>0")
}