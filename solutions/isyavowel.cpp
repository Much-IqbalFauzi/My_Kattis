#include "iostream"

using namespace std;

int main() {

    string name;
    cin >> name;

    string vowels = "aiueo";
    int v=0;
    int nv=0;

    for (int i=0; i<name.length(); i++) {

        if (vowels.find(name[i]) != string::npos) {
            v ++;
            nv ++;
        } else if (name[i] == 'y') {
            v ++;
        }
    }

    cout << nv << " " << v << endl;
}