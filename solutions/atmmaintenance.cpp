#include "iostream"
#include "string"

using namespace std;

int main() {

    int n, k;

    cin >> n;
    cin >> k;

    string result;
    

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if ((k - x) >= 0) {
            result += "1";
            k -= x;
        } else {
            result += "0";
        }
    }

    cout << result << endl;
}