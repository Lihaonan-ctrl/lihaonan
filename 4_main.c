//202510306218
//2229740274@qq.com
//李浩楠
#include <stdio.h>
int main() {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    if (x + y > z && x + z > y && y + z > x) {
        printf("可以组成三角形\n");
    } else {
        printf("不能组成三角形\n");
    }
    return 0;
}
