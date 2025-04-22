#include "iostream"

using namespace std;

int main() {
    int n, m;
    cin >> n;
    cin >> m;

    int total = 0;
    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        for (auto &ch : temp) { 
            if (ch == '1')
            total += 4; 
        } 
        // for (int j = 0; j < m; j++) {
        //     int t;
        //     cin >> t;

        //     if (t == 1) {
        //         total += 4;
        //     }
        // }
    }

    cout << total << endl; 
}