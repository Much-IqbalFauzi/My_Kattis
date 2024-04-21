#include "iostream"
#include "stdio.h"
using namespace std;

int main(){
    int ll;
    cin >> ll;
    for(size_t i=0; i<ll; i++){
        float b, p;
        scanf("%f %f", &b, &p);
        printf("%.4f %.4f %.4f\n", (b-1)*60/p, (b)*60/p, (b+1)*60/p);
    }
    return 0;
}