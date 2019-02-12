// ConsoleApplication64.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>

using namespace std;

long binSearch(long* arr, long size, long key)
{
	long left = 0;
	long right = size - 1;

	while (left <= right)
	{
		long midd = (left + right) / 2;
		if (arr[midd] == key) return midd;
		if (arr[midd] < key) left = midd + 1;
		if (arr[midd] > key) right = midd - 1;
	}
	return -1;
}
void leftSearch(long *data, int end, long search_size)
{
	int start = end;
	// get the start
	while (true)
	{
		// check if left element is equal to key
		if (data[start - 1] == data[start])
		{
			start--;
		}
		else {
			break;
		}
	}
	while (true)
	{
		// check if right element is equal to key
		if (data[end] == data[end + 1] && end < search_size - 1)
		{
			end++;
		}
		else {
			cout << ++start << " " << ++end << endl;
			break;
		}
	}
}

int main()
{
	long data_size, search_size;
	cin >> data_size >> search_size;

	long *data = new long[data_size];
	long *search = new long[search_size];

	for (int i = 0; i < data_size; i++)
	{
		cin >> data[i];
	}

	for (int i = 0; i < search_size; i++)
	{
		cin >> search[i];
	}

	int end = 0;

	for (int i = 0; i < search_size; i++)
	{
		end = binSearch(data, data_size, search[i]);

		if (end != -1)
		{
			leftSearch(data, end, search_size);

		}
		else
		{
			cout << '0' << endl;

		}
	}
	delete[] data;
	delete[] search;

	return 0;
}