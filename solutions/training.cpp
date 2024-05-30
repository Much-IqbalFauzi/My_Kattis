#include "iostream"

using namespace std;

int main() {
    int n, s;

    cin >> n;
    cin >> s;

    while (n--) {
        int l, u;
        cin >> l;
        cin >> u;

        if (s >= l && s <= u) {
            s ++;
        }
    
    }

    cout << s << endl;
}