#include <iostream>
using namespace std;
void Swap(int niz[], const int i, const int j)
{
	if (i != j)
	{
		int temp = niz[i];
		niz[i] = niz[j];
		niz[j] = temp;
	}
}

void QuickSort(int niz[], const int low, const int high)
{
	if (low < high)
	{
		int pivotloc = low;
		int pivotkey = niz[low];
		for (int i = low + 1; i <= high; i++)
		{
			if (niz[i] < pivotkey)
			{
				pivotloc++;
				Swap(niz, pivotloc, i);
			}
		}

		Swap(niz, low, pivotloc);

		QuickSort(niz, low, pivotloc - 1);
		QuickSort(niz, pivotloc + 1, high);
	}
}

void ispis(int niz[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << niz[i] << endl;
	}
}

void main()
{
	int A[] = { 24,11,55,26,84,11};
	int a = 6;

	cout << "NESORTIRANI NIZ:" << endl;
	ispis(A, a);

	QuickSort(A, 0, a - 1);

	cout << endl << "SORTIRANI NIZ" << endl;
	ispis(A, a);


	system("pause>0");
}