#include "iostream"

using namespace std;

int main() {
    int n;
    cin >> n;

    int youngest = -1;
    while (n--) {
        int t;
        cin >> t;
        if (youngest == -1) {
            youngest = t;
            continue;
        }

        if (t < youngest) {
            youngest = t;
        }
    }

    cout << youngest;
}