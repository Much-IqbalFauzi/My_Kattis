#include "iostream"

using namespace std;

int main() {

    int input;
    cin >> input;

    int n = input + 2;

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if ((i==0 && j==0) || (i==0 && j==n-1) || (i==n-1 && j==0) || (i==n-1 && j==n-1)) {
                cout << '+';
            } else if ((j>0 || j<n-2) && (i==0 || i==n-1)) {
                cout << '-';
            } else if ((i>0 || i<n-2) && (j==0 || j==n-1)) {
                cout << '|';
            } else {
                cout << ' ';
            }
        }
        cout << endl;
    }
}