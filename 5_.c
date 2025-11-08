//202510306218
//2229740274@qq.com
//李浩楠
#include <stdio.h>

int arithmeticSum(int a1, int an, int step) {
    int n = ((an - a1) / step) + 1;  
    return n * (a1 + an) / 2;        
}

int main() {
    int sum = arithmeticSum(1, 100, 1);
    printf("%d\n", sum); 
    return 0;
}
