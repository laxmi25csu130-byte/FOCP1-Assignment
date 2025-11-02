#include <stdio.h>
int main(){

    //temporay variable
    int no1,no2,no3;
    printf("enter no1,no2 :");
    scanf("%d%d",&no1,&no2);
    no3=no1;
    no1=no2;
    no2=no3;
    printf("\nUsing temporary no1=%d,no2%d",no1,no2);
    
    // Arithmetic operations
    int a,b;
    printf("enter two integer;");
    scanf("%d%d",&a,&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nUsing Arithmetic Operations: a = %d, b = %d", a, b);

    //Using Bitwise XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("\nUsing Bitwise XOR: a = %d, b = %d", a, b);


}

