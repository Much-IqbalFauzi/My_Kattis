#include "iostream"

using namespace std;

int main() {

    int n;
    cin >> n;
    string res = "";
    while (n--) {
        string word;
        cin >> word;

        if (word[0] >= 65 && word[0] <= 90) {
            res += word[0];
        }
    }

    cout << res << endl;
}