#include <stdio.h>
#include <stdlib.h>

int main()
{
    short int a1, a2, a3, a4, a5, a6;
    scanf("%hd",&a1);
    scanf("%hd",&a2);
    scanf("%hd",&a3);
    scanf("%hd",&a4);
    scanf("%hd",&a5);
    scanf("%hd",&a6);

    printf("%hd %hd %hd %hd %hd %hd", (1-a1), (1-a2), (2-a3), (2-a4), (2-a5), (8-a6));
    return 0;
}