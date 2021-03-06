// ConsoleApplication55.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>

using namespace std;

void QuickSort(int Array[], unsigned int N, int L, int R)
{
	int iter = L, jter = R;
	int middle = (R + L) / 2;
	int x = Array[middle];
	int w;
	do
	{
		while (Array[iter]<x)
		{
			iter++;
		}
		while (x<Array[jter])
		{
			jter--;
		}
		if (iter <= jter)
		{
			w = Array[iter];
			Array[iter] = Array[jter];
			Array[jter] = w;
			iter++;
			jter--;
		}
	} while (iter<jter);
	if (L < jter)
	{
		QuickSort(Array, N, L, jter);
	}
	if (iter<R)
	{
		QuickSort(Array, N, iter, R);
	}
}

int main(int argc, char* argv[])
{
	int size_array; // длинна массива
	cin >> size_array;

	int *sorted_array = new int[size_array]; // одномерный динамический массив
	for (int counter = 0; counter < size_array; counter++)
	{
		cin >> sorted_array[counter];
	}

	QuickSort(sorted_array, size_array, 0, size_array-1); // вызов функции быстрой сортировки

	for (int counter = 0; counter < size_array; counter++)
	{
		cout << sorted_array[counter] << "  "; // печать отсортированного массива
	}
	cout << endl;
	delete[] sorted_array; // высвобождаем память

	return 0;
}