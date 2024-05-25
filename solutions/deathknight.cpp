#include "iostream"

using namespace std;

int main() {
    int n;
    cin >> n;

    int total = 0;
    while (n--) {
        string skills;
        cin >> skills;

        if (skills.find("CD") == string::npos) {
            total ++;
        }
    }

    cout << total << endl;
}