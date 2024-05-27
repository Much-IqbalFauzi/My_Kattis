#include "iostream"

using namespace std; 

int main() {

    int n;
    cin >> n;
    int l = n;

    int t = 0;

    while (l--) {
        int w;
        cin >> w;
        t += w;
    }

    if (t % 3 == 0) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
}