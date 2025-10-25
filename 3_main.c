//202510306218
//2229740274@qq.com
//李浩楠
#include <stdio.h>
int main() {
    int a, b;
    char op;
    scanf("%d %d %c", &a, &b, &op);
    switch (op) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            printf("%d\n", a / b);  
            break;
        default:
            break;
    }
    return 0;
}
