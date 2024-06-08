#include "iostream"

using namespace std;

int main() {
    int n, total = 0;
    cin >> n;

    int cpu = 0;
    int ram = 0;
    int hdd = 0;

    for (int i=0; i<n; i++) {
        for (int j=0; j<3; j++) {
            char x;
            cin >> x;
            if (x != 'J') {
                continue;
            }

            if (j==0) {
                cpu ++;
            } else if (j==1) {
                ram ++;
            } else if (j==2) {
                hdd ++;
            }
        }
    }


    if (cpu <= ram && cpu <= hdd) {
        cout << cpu << endl;
    } else if (ram <= cpu && ram <= hdd) {
        cout << ram << endl;
    } else {
        cout << hdd << endl;
    }

}