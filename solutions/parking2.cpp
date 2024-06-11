#include "iostream"

using namespace std;


void test_case() {
    int n;
    cin >> n;

    int total =  0, prev = -1;
    int nearest = 99;
    while (n--) {
        int x;
        cin >> x;
        if (x <= nearest) {
            nearest = x;
        }

        if (prev != -1) {
            total += abs(prev - x);
        }
        prev = x;
    }
    total += nearest;

    cout << total << endl;
}


int main() {
    int t;
    cin >> t;

    while (t--) {
        test_case();
    }
}