#include "iostream"

using namespace std;

int main() {
    int us;
    int kr;

    cin >> us;
    cin >> kr;

    if (us > kr) {
        cout << "MAGA!";
    } else if (us < kr) {
        cout << "FAKE NEWS!";
    } else {
        cout << "WORLD WAR 3!";
    }
}