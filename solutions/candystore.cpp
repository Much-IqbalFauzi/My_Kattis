#include "iostream"
#include <map>

using namespace std;

int main() {

    int n, q;
    cin >> n;
    cin >> q;

    int name = n;
    
    map<string, string> initial;
    while (n--) {
        string first, last;
        cin >> first;
        cin >> last;
        string call, fullName;
        call += first[0];
        call += last[0];

        fullName += first;
        fullName += " ";
        fullName += last;

        if (initial.count(call)){
            initial[call] = "ambiguous";
        } else {
            initial[call] = fullName;
        }
    }

    while (q--) {
        string call;
        cin >> call;

        if (initial.count(call)) {
            cout << initial[call] << endl;
        } else {
            cout << "nobody" << endl;
        }
    }
}