#include "iostream"

using namespace std;

int main() {


    int ttt[3][3];

    for (int i=0; i<3; i++) {
        string row;
        cin >> row;
        for (int j=0; j<3; j++) {
            ttt[i][j] = row[j];
        }
    }
    char ch;

    for (int i=0; i<3; i++) {

        bool vr = ttt[0][i] == ttt[1][i] && ttt[1][i] == ttt[2][i];
        bool hr = ttt[i][0] == ttt[i][1] && ttt[i][1] == ttt[i][2];

        if (vr) {
            ch = ttt[0][i];
        } else if (hr) {
            ch = ttt[i][0];
        }
    }

    bool dg1 = ttt[0][0] == ttt[1][1] && ttt[1][1] == ttt[2][2];

    bool dg2 = ttt[0][2] == ttt[1][1] && ttt[1][1] == ttt[2][0];

    if (dg1) {
        ch = ttt[0][0];
    } else if (dg2) {
        ch = ttt[2][0];
    }

    if (ch == 'O') {
        cout << "Jebb" << endl;
    } else {
        cout << "Neibb" << endl;
    }
    
}