#include "iostream"
#include <algorithm>
#include <map>
#include <utility>
#include <vector>

using namespace std;

bool cmp(pair<char, int> &a, pair<char, int> &b) {
    return a.second < b.second;
}

void sortMap(map<char, int> & val) {

    vector<pair<char, int>> temp;

    for (auto &item : val) {
        temp.push_back(item);
    }

    sort(temp.begin(), temp.end(), cmp);

    cout << temp[0].second << endl;
}

int main() {
    map<char, int> val;
    int n = 5;
    while (n--) {
        string card;
        cin >> card;

        if (val.count(card[0])) {
            val[card[0]] = 0;
        } else {
            val[card[0]] += 1;
        }
    }

    sortMap(val);

}