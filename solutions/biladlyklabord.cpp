#include "iostream"
#include <string>

using namespace std;

int main() {
    string text;
    getline(cin, text);

    string res="";
    res += text[0];

    for (int i=1; i<text.length(); i++) {
        if (text[i] != text[i-1]) {
            res += text[i];
        }
    }

    cout << res << endl;
}