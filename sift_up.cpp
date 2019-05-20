#include<bits/stdc++.h>
 
using namespace std;

void sift_up(vector<int>& heap, int node, int to_remember);

int main() {

    int heap_size;
    //  отримуємо розмір кучі
    scanf("%d", &heap_size);

    vector<int> heap(heap_size);

    for (int i = 0; i < heap_size; i++) {

        scanf("%d", &heap[i]);
    
    }

    int number_of_changes;
    scanf("%d", &number_of_changes);

    //  індекс елемента який змінюємо
    vector<int> index(number_of_changes); 
    //  значення на яке змінюємо
    vector<int> value(number_of_changes);

    for (int i = 0; i < number_of_changes; i++) {

        scanf("%d", &index[i]);
        scanf("%d", &value[i]);

    }

    int to_remember, node;

    for (int i = 0; i < number_of_changes; i++) {

        node = index[i] - 1;
        heap[node] += value[i];
        to_remember = heap[node];

        sift_up(heap, node, to_remember);
        
    }

    // виводимо кучу
    for (int i = 0; i < heap_size; i++) {

        printf("%d ", heap[i]);

    }
    
}

void sift_up(vector<int>& heap, int node, int to_remember) {

    //  k коефіцієнт для обчислення яка *дитина* порівнюється
    int k, parent_node, child_node = node;

    while (true) {

        k = isfinite(child_node) ? 1 : 2;
        parent_node = (child_node - k) / 2;

        if (heap[child_node] > heap[parent_node] && parent_node >= 0) {

            swap(heap[child_node], heap[parent_node]);
            child_node = parent_node;
            continue;

        } else {

            break;

        }
        
    }

    if (to_remember == heap[parent_node]) {

        printf("%d\n", parent_node + 1);

    } else {

        printf("%d\n", child_node + 1);

    }
    
}
