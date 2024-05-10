#include "iostream"

using namespace std;

int main() {

    string name;
    cin >> name;

    int age;
    cin >> age;

    while (age--) {
        cout << "Hipp hipp hurra, " << name << '!' << endl;
    }
}