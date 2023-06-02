#include <stdio.h>

void changeMin(int arr[], int n) {
    if (n < 2) {
        return;
    }
    int min1 = arr[0]; // 1 мин
    int min2 = arr[1]; // 2 мин
    int index1 = 0; // Индекс 1 мин
    int index2 = 1; // Индекс 2 мин
    // 1 и 1 мин в массиве
    for (int i = 2; i < n; i++) {
        if (arr[i] < min1) {
            min2 = min1;
            index2 = index1;
            min1 = arr[i];
            index1 = i;
        } else if (arr[i] < min2) {
            min2 = arr[i];
            index2 = i;
        }
    }
    // Переставим 1 и 2 мин
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}
int main() {
    int arr[] = {3, 2, 1, 4, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Исходный массив: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    changeMin(arr, n);
    printf("\nМассив после перестановки минимумов: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}


// changeMin принимает массив arr и его размер n. Сначала происходит проверка,
// что в массиве есть как минимум два элемента. Затем ищутся 1 и 2 мин в массиве и их индексы.
// После этого происходит перестановка элементов с помощью переменной temp.
// В функции main создается исходный массив, и его элементы выводятся.
// Затем вызывается функция changeMin для перестановки минимумов в массиве. Результат выводится.