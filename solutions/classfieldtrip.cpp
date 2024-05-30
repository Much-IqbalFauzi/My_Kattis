#include "iostream"
#include <algorithm>

using namespace std;

int main() {

    string a, b;
    cin >> a;
    cin >> b;

    a.append(b);

    sort(a.begin(), a.end());

    cout << a << endl;
}