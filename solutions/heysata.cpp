#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    char hay;
    string stack;

    cin >> n;
    cin >> hay;
    cin >> stack;

    bool found = false;
    for (auto & ch: stack) {
        if (ch == hay) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "Unnar fann hana!" << endl;
    } else {
        cout << "Unnar fann hana ekki!" << endl;
    }
}