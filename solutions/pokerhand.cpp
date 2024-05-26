#include "iostream"
#include <map>
#include <utility>

using namespace std;

int main() {
    map<char, int> val;
    int n = 5;
    while (n--) {
        string card;
        cin >> card;

        if (val.count(card[0])) {
            val[card[0]] = val[card[0]] + 1;
        } else {
            val.insert(make_pair(card[0], 1));
        }
    }

    int biggest = 0;
    for (auto &item : val) {
        if (item.second > biggest) {
            biggest = item.second;
        }
    }

    cout << biggest << endl;

}