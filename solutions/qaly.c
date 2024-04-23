
#include <stdio.h>
#include <stdlib.h>

int main()
{
    short int a;
    float b, c, d=0;
    scanf("%hd",&a);
    for(int i=0; i<a; i++){
        scanf("%f",&b);
        scanf("%f",&c);
        d+=(c*b);
    }
    printf("%f",d);
    return 0;
}