#include "iostream"
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    int c = 7;

    while (n--) {
        string _, v;
        cin >> _;
        cin >> v;
        if (v == "op!" && c < 10) {
            c++;
        }

        if (v == "ned!" && c > 0) {
            c--;
        }
    }

    cout << c << endl;
}