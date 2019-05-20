#include<bits/stdc++.h>
 
using namespace std;
 
void sift_down(vector<int>& heap, int heap_size, int to_remember);
 
int main()
{
 
    int heap_size;
    //  отримуємо розмір кучі
    scanf("%d", &heap_size);
 
    vector<int> heap(heap_size);
 
    for (int i = 0; i < heap_size; i++)
    {
        scanf("%d", &heap[i]);
    }
 
    int number_of_changes;
    scanf("%d", &number_of_changes);
 
    //  індекс елемента для зміни
    vector<int> index(number_of_changes);
    //  значення, яке додаємо
    vector<int> value(number_of_changes);
 
    for (int i = 0; i < number_of_changes; i++)
    {
        scanf("%d", &index[i]);
        scanf("%d", &value[i]);
    }
 
    int parent_node;
    int to_remember;
 
    for (int i = 0; i < number_of_changes; i++)
    {
        parent_node = index[i] - 1;
        heap[parent_node] -= value[i];
        to_remember = heap[parent_node];
 
        sift_down(heap, parent_node, to_remember);
 
    }
 
    for (int i = 0; i < heap.size(); i++)
    {
        printf("%d ", heap[i]);
    }
   
}
 
 
 
void sift_down(vector<int>& heap, int node , int to_remember)
{
    int parent_node = node;
    int left_child;
    int right_child;

        while(true)
        {
            //  обчислюємо індекс *дитини*
            left_child = (parent_node * 2) + 1;
            right_child = (parent_node * 2) + 2;

            //  перевіряємо чи є *дитина*
            if (left_child >= heap.size())
            {
                break;
            }
            //  перевіряємо чи *батько* більший за дитину
            if (heap[parent_node] > heap[left_child] && heap[parent_node] > heap[right_child] && right_child < heap.size())
            {
                break;
            }
            //  перевіряємо чи *батько* більший за ліву *дитину* і чи є права *дитина*
            if (heap[parent_node] > heap[left_child] && right_child >= heap.size())
            {
                break;
            }
 
            if (heap[right_child] > heap[left_child] && heap[right_child] > heap[parent_node] && right_child < heap.size())
            {
                swap(heap[parent_node], heap[right_child]);
                parent_node = right_child;
                continue;
            }
            else
            {
                swap(heap[parent_node], heap[left_child]);
                parent_node = left_child;
                continue;
            }

        }
 

        if (to_remember == heap[parent_node])
        {
            printf("%d\n", parent_node + 1);
        }
        else if (to_remember == heap[left_child])
        {
            printf("%d\n", left_child + 1);
        }
        else
        {
            printf("%d\n", right_child + 1);
        }
           
 
}