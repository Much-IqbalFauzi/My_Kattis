#include "iostream"

using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;

    int div = b / a;
    int remain = b % a;

    for (int i=0; i<a; i++) {
        for (int j=0; j<div; j++) {
            cout << "*";   
        }
        if (remain-- > 0) {
            cout << "*";
        }
        cout << endl;
    }
}