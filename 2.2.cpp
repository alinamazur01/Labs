#include <iostream>

using namespace std;

void SelectionSort(int arr[], int n) 
{ 
    int i, j, max_index; 
  

    for (i = n- 1; i >= 0; i--) 
    { 

        max_index = i; 
        for (j = i; j >=0; j--) 
          if (arr[j] > arr[max_index]) 
            max_index = j; 

        swap(arr[max_index], arr[i]); 
    } 
}

int main()
{
    int size1;
    cin >> size1;
    int array1[size1];
    for (int i = 0; i < size1; i++){
        cin >> array1[i];
    }
    SelectionSort(array1, size1);
    for (int i = 0; i < size1; i++){
        cout << array1[i] << " ";
    }
    return 0;
}