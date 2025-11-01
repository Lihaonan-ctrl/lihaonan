//202510306218
//2229740274@qq.com
//李浩楠
#include <stdio.h>
int main() {
    int count = 0; 
    for (int num = 100; num <= 999; num++) {
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
    }
    printf("\n");
    return 0;
}
