#include "iostream"
#include <algorithm>
#include <map>
#include <utility>
#include <vector>

using namespace std;

void track_remaining(int & chain, map<int, int> & houses) {
    for (auto & item : houses) {
        if (item.first == chain) {

            // cout << "Find item__Key::" << item.first << "__the value::" << item.second << endl;
            chain = item.second;
            houses.erase(item.first);

            track_remaining(chain, houses);
            break;
        }

        if (item.second == chain) {

            // cout << "Find item__Key::" << item.first << "__the value::" << item.second << endl;
            chain = item.first;
            houses.erase(item.first);

            track_remaining(chain, houses);
            break;
        }
    }
}

void show_remaining(map<int, int> & houses) {
    vector<int> remaining;
    for (auto & item : houses) {
        remaining.push_back(item.first);
        remaining.push_back(item.second);
    }

    sort(remaining.begin(), remaining.end());

    auto duplicate = unique(remaining.begin(), remaining.end());

    remaining.erase(duplicate, remaining.end());

    for (int item : remaining) {
        cout << item << endl;
    }
}


int main() {
    int n, m;
    cin >> n;
    cin >> m;

    map<int, int> houses;

    int chain = 1;

    for (int i=0; i<m; i++) {
        int a, b;
        cin >> a;
        cin >> b;

        if (a == chain) {
            chain = b;
            continue;
        }

        if (b == chain) {
            chain = a;
            continue;
        }

        houses.insert(make_pair(a, b));
    }

    //track remaining house
    track_remaining(chain, houses);

    
    if (houses.size() == 0) {
        cout << "connected" << endl;
    } else {
        show_remaining(houses);
    }
    
}