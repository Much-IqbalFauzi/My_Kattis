#include "iostream"
#include <algorithm>

using namespace std;

int main() {
    int n, total = 0;
    cin >> n;
    int com[] = {0,0,0};

    for (int i=0; i<n; i++) {
        for (int j=0; j<3; j++) {
            char x;
            cin >> x;
            if (x != 'J') {
                continue;
            }

            if (j==0) {
                com[0] += 1;
            } else if (j==1) {
                com[1] += 1;
            } else {
                com[2] += 1;
            }
        }
    }

    int size = sizeof(com) / sizeof(com[0]);
    sort(com, com + n);

    cout << com [0] << endl;
}