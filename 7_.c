//202510306218
//2229740274@qq.com
//李浩楠
#include <stdio.h>

void reverseArray(int arr[], int len) {
    for (int i = 0; i < len / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[len - 1 - i];
        arr[len - 1 - i] = temp;
    }
}

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    reverseArray(arr, 5);
    for (int i = 0; i < 5; i++) {
        if (i == 0) printf("%d", arr[i]);
        else printf(" %d", arr[i]);
    }
    printf("\n");
    return 0;
}
