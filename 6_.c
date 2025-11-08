//202510306218
//2229740274@qq.com
//李浩楠
#include <stdio.h>

int arraySum(int arr[], int len) {
    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += arr[i];
    }
    return sum;
}

int arrayProduct(int arr[], int len) {
    int product = 1;
    for (int i = 0; i < len; i++) {
        product *= arr[i];
    }
    return product;
}

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = arraySum(arr, 5);
    int product = arrayProduct(arr, 5);
    printf("%d %d\n", sum, product);
    return 0;
}
