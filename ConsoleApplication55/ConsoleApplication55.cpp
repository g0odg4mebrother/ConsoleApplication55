#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5; // Размер массива

    // Исходный массив
    int arr1[] = { 10, 20, 30, 40, 50 };

    int arr2[SIZE];

    int* ptr1 = arr1;
    int* ptr2 = arr2;

    for (int i = 0; i < SIZE; ++i) {
        *ptr2++ = *ptr1++;
    }

    cout << "Копированный массив:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << arr2[i] << " ";
    }
    cout << endl;

        const int SIZE = 5; // Размер массива
    
    // Исходный массив
    int arr[] = {10, 20, 30, 40, 50};
    
    // Указатели на начало и конец массива
    int *start = arr;
    int *end = arr + SIZE - 1;
    
    while (start < end) {
        // Меняем местами текущий элемент и последний
        int temp = *start;
        *start = *end;
        *end = temp;
        
        // Продвигаем указатели к середине
        start++;
        end--;
    }
    
    // Вывод измененного массива
    cout << "Массив с обратным порядком:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}