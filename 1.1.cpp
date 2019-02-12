// ConsoleApplication60.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


#include "iostream"
using namespace std;

int main()
{
	int a, b, arr[1000], count = 0;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> arr[i];
	}
	cin >> b;
	for (int i = 0; i < a; i++) {
		if (arr[i] == b)
		{
			count ++;
		}
	}
	cout << count;
	return 0;
}