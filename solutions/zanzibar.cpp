#include "iostream"

using namespace std;

int main() {

    int n;
    cin >> n;

    while (n--) {
        int total = 0;

        int a, b;
        cin >> a;
        while (cin >> b && b!= 0) {
            int isReal = b - (2 * a);
            a = b;
            if (isReal < 0) {
                isReal = 0;
            }

            total += isReal;
        }
        cout << total << endl;

    }
}