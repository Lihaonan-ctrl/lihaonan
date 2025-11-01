//202510306218
//2229740274@qq.com
//李浩楠
#include <stdio.h>
int main() {
    int n, is_prime = 1, i = 2;
    scanf("%d", &n);
    
    if (n <= 1) {
        is_prime = 0;
    } else {
        while (i < n) {
            if (n % i == 0) {
                is_prime = 0;
                break;
            }
            i++; 
        }
    }
    
    if (is_prime) {
        printf("密钥安全，密码设置成功\n");
    } else {
        printf("密钥不安全，请重新输入\n");
    }
    return 0;
}
