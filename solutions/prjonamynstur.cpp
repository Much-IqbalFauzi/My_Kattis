#include "iostream"
#include <map>

using namespace std;

int main() {

    int n, m;

    cin >> n;
    cin >> m;

    map<char, int> score = {
        {'.', 20},
        {'0', 10},
        {'\\', 25},
        {'/', 25},
        {'A', 35},
        {'^', 5},
        {'v', 22},
    };

    int total = 0;
    while (n--) {
        string row;
        cin >> row;
        for (char &ch : row) {
            total += score[ch];
        }
    }

    cout << total << endl;
}