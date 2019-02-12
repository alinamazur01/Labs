// ConsoleApplication59.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include<vector>
#include<iterator>
#include<iostream>

using namespace std;

int binSearch(int* arr, int count, int key)
{
	int left = 0;
	int right = count - 1;

	while (left <= right) {
		int midd = (left + right) / 2;
		if (arr[midd] == key) {
			return midd;
		}else
			if (arr[midd] < key) {
				left = midd + 1;
			}
			else
				if (arr[midd] > key) {
					right = midd - 1;
				}
	}
	return -1;
}

int main()
{
	int a, b;
	cin >> a >> b;
	int arr1[a];
	int arr2[a];
	for (int i = 0; i < a; i++)
	{
		cin >> arr1[i];
	}

	for (int i = 0; i < b; i++)
	{
		cin >> arr2[i];
	}
	int counter = 0;
	while (counter < b)
	{

		if (binSearch(arr1, a, arr2[counter]) != -1)
		{
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;
		counter++;
	}
	return 0;
}