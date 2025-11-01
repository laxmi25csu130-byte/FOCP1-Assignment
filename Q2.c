#include <stdio.h>

int main() {
    int a, b, hcf;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if(a < 0) a = -a;
    if(b < 0) b = -b;

    for(int i = 1; i <= (a < b ? a : b); i++) {
        if(a % i == 0 && b % i == 0)
            hcf = i;
    }

    printf("HCF of %d and %d = %d\n", a, b, hcf);
    return 0;
}