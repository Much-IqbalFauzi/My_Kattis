#include "iostream"

using namespace std;

int main() {

    string text;
    cin >> text;
    int count = 0;
    for (char &ch: text) {
        if ((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90)) {
            count ++;
        }
    }
    cout << count << endl;
}