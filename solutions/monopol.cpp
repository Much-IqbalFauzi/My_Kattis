#include <iostream>

using namespace std;


void count_possibility(int possibility[36], int val, int *total) {
    for (int i=0; i<36; i++) {
        if (possibility[i] == val) {
            *total += 1;
        }
    }
}

int main() {
    int n;
    cin >> n;

    int possibility[36] = {
        2,3,4,5,6,7,
        3,4,5,6,7,8,
        4,5,6,7,8,9,
        5,6,7,8,9,10,
        6,7,8,9,10,11,
        7,8,9,10,11,12
    };

    int total = 0;

    for (int i=0; i<n; i++) {
        int y;
        cin >> y;
        count_possibility(possibility, y, &total);
    }

    cout << (float)total/36 << endl;
}
