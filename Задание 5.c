#include <stdio.h>

struct Car {
    char brand[20];
    char model[20];
    int price;
};
int sumCarPrice(struct Car cars[], int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) { 
        sum += cars[i].price;
    }
    return sum;
}
int main() {
    struct Car cars[3];
    strcpy(cars[0].brand, "Brand1");
    strcpy(cars[0].model, "Model1");
    cars[0].price = 10000;
    strcpy(cars[1].brand, "Brand2");
    strcpy(cars[1].model, "Model2");
    cars[1].price = 20000;
    strcpy(cars[2].brand, "Brand3");
    strcpy(cars[2].model, "Model3");
    cars[2].price = 30000;
    int n = sizeof(cars) / sizeof(cars[0]);
    int totalSum = sumCarPrice(cars, n);
    printf("%d\n", totalSum);
    return 0;
}



// Код не работает, не знаю где ошибка, вроде должен, по идее именно теория правильная, значит в коде ошибка...