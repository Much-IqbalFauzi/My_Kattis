#include "iostream"
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    string t;
    cin >> t;

    string temp = "";
    int res = 0;
    bool track = false;
    for (int i=0; i<n; i++) {
        int ch = t[i] - '0';

        if (ch >=0 && ch <= 9) {
            temp += t[i];

            track = true;
        }

        if ((ch > 9 || i == n-1) && track == true) {
            int num = stoi(temp);
            if (num > res) {
                res = num;
            }

            temp = "";

            track = false;
        }
    }

    cout << res << endl;
}