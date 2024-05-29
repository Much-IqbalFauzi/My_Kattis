#include "iostream"

using namespace std;

int main() {
    string cham;
    cin >> cham;

    int chamNum;
    for (int i=0; i<cham.length(); i++) {
        int n = cham[i] - '0';
        
        if (n != i+1) {
            chamNum = -1;
            break;
        }

        chamNum = n; 
    }

    cout << chamNum << endl;
}