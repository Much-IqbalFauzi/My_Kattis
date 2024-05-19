#include "iostream"
#include <map>

using namespace std;

int main() {

    int n;
    cin >> n;

    map<string, int> points;
    while (n--) {
        string name;
        int point;
        cin >> name;
        cin >> point;
        if (points.count(name)) {
            points[name] += point;
        } else {
            points[name] = point;
        }
    }

    int highest = 0;
    string owner = "";
    for (auto &item : points) {
        if (item.second > highest) {
            highest = item.second;
            owner = item.first;
        }
    }

    cout << owner << endl;
}