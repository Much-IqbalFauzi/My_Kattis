#include "iostream"
#include <cmath>
#include <cstdlib>
#include <map>
#include <utility>
#include <vector>

using namespace std;

void shape_point(int shape, vector<int> & points) {
    for (int i=0; i<shape; i++) {
        int temp;
        cin >> temp;
        points.push_back(temp);
    }
}

bool isHitCircle(vector<int> shape, int xi, int yi) {

    double l = abs(shape.at(0) - xi);
    double h = abs(shape.at(1) - yi);

    double ri = sqrt((l*l) + (h*h));

    if (ri <= shape.back()) {
        return true;
    } else {
        return false;
    }

}

bool isHitRect(vector<int> shape, int xi, int yi) {

    bool xf = xi >= shape.at(0) && xi <= shape.at(2);
    bool yf = yi >= shape.at(1) && yi <= shape.at(3);
    if (xf && yf) {
        return true;
    } else {
        return false;
    }
}

void check_point(multimap<string, vector<int>> shapes, int x, int y, int & points) {

    for (auto & item: shapes) {
        bool isHit;
        if (item.first == "circle") {
            isHit = isHitCircle(item.second, x, y);
        } else {
            isHit = isHitRect(item.second, x, y);
        }

        if (isHit) {
            points += 1;
        }
    }
}

int main() {
    int n;
    cin >> n;
    multimap<string, vector<int>> sets;

    for (int i=0; i<n; i++) {

        string shape;
        cin >> shape;
        vector<int> points;
        if (shape == "circle") {
            shape_point(3, points);
        } else {
            shape_point(4, points);
        }
        sets.insert(pair<string, vector<int>>(shape, points));
    }

    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x;
        cin >> y;
        int points = 0;
        check_point(sets, x, y, points);

        cout << points << endl;
    }

}