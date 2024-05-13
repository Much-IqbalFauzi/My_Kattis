#include "iostream"
#include <map>

using namespace std;

int main() {

    int N, total = 0;
    char dominant;
    cin >> N;
    cin >> dominant;

    map<char, int> pow = {
        {'A', 11},
        {'K', 4},
        {'Q', 3},
        {'J', 20},
        {'T', 10},
        {'9', 14},
        {'8', 0},
        {'7', 0},
    };

    map<char, int> low = {
        {'A', 11},
        {'K', 4},
        {'Q', 3},
        {'J', 2},
        {'T', 10},
        {'9', 0},
        {'8', 0},
        {'7', 0},
    };

    N *= 4;
    
    while (N--) {
        string cards;
        cin >> cards;
        
        if (cards[1] == dominant) {
            total += pow[cards[0]];
        } else {
            total += low[cards[0]];
        }
    }

    cout << total << endl;
}