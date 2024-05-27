#include "iostream"
#include <cstdlib>

using namespace std;

int main() {

    double x1, y1, x2, y2;
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;

    double length = abs((x2 - x1));
    double heigh = abs((y2 - y1));

    cout << length * heigh << endl;
}