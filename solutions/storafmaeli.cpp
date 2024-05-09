#include "iostream"

using namespace std;

int main() {
    int n;

    cin >> n;

    string party = "Neibb";

    if (n % 10 == 0) {
        party = "Jebb";
    }

    cout << party << endl;
}