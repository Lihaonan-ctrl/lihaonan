//202510306218
//2229740274@qq.com
//李浩楠
#include <stdio.h>
int main() {
    int num = 100, count = 0;
    while (num <= 999) {
        int hundreds = num / 100;
        int tens = (num / 10) % 10;
        int units = num % 10;
        
        if (hundreds*hundreds*hundreds + tens*tens*tens + units*units*units == num) {
            if (count > 0) {
                printf(" ");
            }
            printf("%d", num);
            count++;
        }
        num++; 
    }
    printf("\n");
    return 0;
}
