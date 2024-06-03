#include "iostream"

using namespace std;

int main() {
    char ch;
    cin >> ch;

    string vowel = "AIUEO";

    if (vowel.find(ch) != string::npos) {
        cout << "Jebb" << endl;
    } else if (ch == 'Y') {
        cout << "Kannski" << endl;
    } else {
        cout << "Neibb" << endl;
    }
}