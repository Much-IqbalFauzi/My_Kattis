#include <iostream>
using namespace std;

int ad(int num){
    int res = 0;
    while (num>0){
        res += num % 10;
        num /= 10;
    }
    return res;
}

int main(){
    int a,b,c, minn, maxs;
    cin >> a;
    cin >> b;
    cin >> c;

    for(int i=a; i<=b; i++){
        int x = ad(i);
        if(x==c){
            minn = i;
            break;
        }
    }

    for(int i=b; i>=a; i--){
        int x = ad(i);
        if(x==c){
            maxs = i;
            break;
        }
    }
    cout << minn << "\n" << maxs << endl;
}