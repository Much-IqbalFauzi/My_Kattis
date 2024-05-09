#include "iostream"

using namespace std;

int main() {

    int n;
    cin >> n;
    string temp = "";
    
    while (n--) {
        string meat;
        cin >> meat;

        if (temp == "") {
            temp = meat;
        } else if (temp != "" && temp != meat) {
            temp = "blandad best";
        }
    }

    cout << temp << endl;
}