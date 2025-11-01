//202510306218
//2229740274@qq.com
//李浩楠
#include <stdio.h>
int main() {
    int arr[5];
    for (int i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 4; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = 0;
    for (int i = 0; i < 5; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}
