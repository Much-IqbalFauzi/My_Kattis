#include "iostream"
#include <string>

using namespace std;

int main() {
    int h, w;
    cin >> h;
    cin >> w;

    string res = "";

    while (h--) {
        string words;
        cin >> words;

        for (char &ch: words) {
            if (ch == '.') continue;
            res += ch;
        }
    }

    cout << res << endl;
}