#include "iostream"
#include <iomanip>

using namespace std;

int main() {

    double v, a, t;
    cin >> v;
    cin >> a;
    cin >> t;

    cout << fixed << setprecision(9) << (v*t) + (a * (t * t) / 2) << endl;

}