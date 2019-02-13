#include<iostream>

using namespace std;

int main()
{
    int size;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++){
        cin >> array[i];
    }
    for (int j = 0; j < size - 1; j++){
        for (int i = 0; i < size - 1; i++){
            if (array[i] > array[i + 1]){
                swap(array[i], array[i + 1]);
            }
        }
    }
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    return 0;
}