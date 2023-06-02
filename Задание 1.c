#include <stdio.h>
int isPalindrome(int num) {
    int reversedNum = 0;
    int originalNum = num;
    while (num > 0) {
        int remain = num % 10;
        reversedNum = reversedNum * 10 + remain;
        num = num / 10;
    }
    if (originalNum == reversedNum) {
        return 1; // палиндром
    } else {
        return 0; // не палиндром
    }
}
int main() {
    int number;
    scanf("%d", &number);
    if (isPalindrome(number)) {
        printf("%d - палиндром\n", number);
    } else {
        printf("%d - не палиндром\n", number);
    }
    return 0;
}


// isPalindrome принимает целое число num, проверяет, является ли оно палиндромом.
// Для этого переворачиваем num, используя операции деления на 10 и взятия остатка от деления.
// Затем сравнивает полученное перевернутое число с начальным числом.
// В функции main пользователю предлагается ввести число,
// и затем вызывается функция isPalindrome для проверки этого числа.
// Результат выводится на экран в зависимости от того, является ли число палиндромом или нет.