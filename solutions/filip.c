#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int reverse=0;
    int reverse2=0;
    scanf("%d",&a);
    scanf("%d",&b);
    while(a != 0 ){
        reverse = reverse * 10 + a % 10;
        a = a / 10;
    }
    while(b != 0 ){
        reverse2 = reverse2 * 10 + b % 10;
        b = b / 10;
    }

    if (reverse < reverse2){
        printf("%d",reverse2);
    } else if (reverse > reverse2){
        printf("%d", reverse);
    }

    return 0;
}
