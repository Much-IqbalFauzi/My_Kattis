#include "iostream"
#include <algorithm>
#include <cctype>
#include <map>
#include <string>
#include <utility>
#include <vector>

using namespace std;

bool is_num(string &s) {
    return find_if(s.begin(), s.end(), [](unsigned char c) {
        return !isdigit(c);
    }) == s.end();
}

bool comp(pair<string, int> &a, pair<string, int> &b) {
    return a.second < b.second;
}

void map_sort(map<string, int> &colors) {
    vector<pair<string, int>> items;

    for (auto &item : colors) {
        items.push_back(item);
    }
    sort(items.begin(), items.end(), comp);

    for (auto &item: items) {
        cout << item.first << endl;
    }
}

int main() {

    int n;
    cin >> n;

    map<string, int> colors;

    while (n--) {
        int num;
        string name, x, y;

        cin >> x;
        cin >> y;

        if (is_num(x)) {
            num = stoi(x) / 2;
            name = y;
        } else {
            num = stoi(y);
            name = x;
        }

        colors.insert(make_pair(name, num));
    }

    map_sort(colors);
}