#include "iostream"
#include <string>

using namespace std;

int main() {
    string name;
    cin.ignore();
    getline(cin, name, '\n');
    int a, b, res;

    cin >> a;
    cin >> b;
    cin >> res;

    if (res < 0) {
        cout << "JEDI" << endl;
    } else if (res>0 && a-b+res==0) {
        cout << "SITH" << endl;
    } else {
        cout << "VEIT EKKI" << endl;
    }
}