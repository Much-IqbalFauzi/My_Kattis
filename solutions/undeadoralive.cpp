#include "iostream"
#include <string>

using namespace std;

int main() {

    string text;
    cin.ignore();
    getline(cin, text, '\n');

    bool human = text.find(":)") != string::npos;
    bool zombie = text.find(":(") != string::npos;

    if (human && zombie) {
        cout << "double agent" << endl;
    } else if (human && !zombie) {
        cout << "alive" << endl;
    } else if (!human && zombie) {
        cout << "undead" << endl;
    } else {
        cout << "machine" << endl;
    }
}