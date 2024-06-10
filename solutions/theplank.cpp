#include "iostream"

using namespace std;

int main() {
    int n;
    cin >> n;
    int x=n/1, y=n/2, z=n/3, a=0, b=0;

    if (n - z*3 > 1) {
        b += z-3;
    }

    if (n - y*2 > 0) {
        b += y-2;
    }

    cout << x+y+z + a + b << endl;

}