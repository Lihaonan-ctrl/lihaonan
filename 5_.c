//202510306218
//2229740274@qq.com
//李浩楠
#include <stdio.h>
int main() {
    int arr[5];
    for (int i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
    }
    arr[4] = arr[0] + arr[1] + arr[2] + arr[3];
    for (int i = 0; i < 5; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}
