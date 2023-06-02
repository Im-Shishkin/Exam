#include <stdio.h>
float sumFoo(int n) {
    float sum = 0.0;
    for (int i = 1; i <= n; i++) {
        float term = 1.0 / (i * (i + 1));
        sum += term;
    }
    return sum;
}
int main() {
    int number;
    scanf("%d", &number);
    float result = sumFoo(number);
    printf("%f\n", result);
    return 0;
}


// sumFoo принимает число n и вычисляет сумму заданного ряда.
// В цикле for происходит пербор от 1 до n,
// и на каждом шаге вычисляется значение текущего элемента ряда (term) по формуле.
// И это значение прибавляется к сумме sum.
// В функции main пользователь вводит  число n,
// и затем вызывается функция sumFoo для вычисления суммы ряда.
// Результат выводится.
