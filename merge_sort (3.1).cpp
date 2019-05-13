// ConsoleApplication65.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

void MergeSort(int*& left, int n)
{
	if (n > 1)
	{
		int midd = n / 2;
		int* right = left + midd;
		MergeSort(left, midd);
		MergeSort(right, n - midd);
		int* new_num = new int[n];
		int* sorted = new_num;
		int* l_end = left + midd - 1;
		int* r_end = right + n - midd - 1;

		while (left <= l_end && right <= r_end)
		{
			if (*left <= *(right))
			{
				*new_num = *left;
				new_num++;
				left++;
			}
			else
			{
				*new_num = *right;
				new_num++;
				right++;
			}
		}
		while (left <= l_end)
		{
			*new_num = *left;
			left++;
			new_num++;
		}
		while (right <= r_end)
		{
			*new_num = *right;
			right++;
			new_num++;
		}
		left = sorted;
	}
}

int main()
{
	int size_array; // длинна массива
	cin >> size_array;

	int *sorted_array = new int[size_array]; // одномерный динамический массив
	for (int counter = 0; counter < size_array; counter++)
	{
		cin >> sorted_array[counter];
	}

	MergeSort(sorted_array, size_array); // вызов функции сортировки слиянием

	for (int counter = 0; counter < size_array; counter++)
	{
		cout << sorted_array[counter] << "  "; // печать отсортированного массива
	}
	cout << endl;
	delete[] sorted_array; // высвобождаем память

	return 0;
}
