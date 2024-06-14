#include "iostream"
#include <vector>

using namespace std;

int main() {
    int n, x;
    cin >> n;
    x = n-1;
    // string txt[n];
    vector<string>txt;

    while(n--) {
        string s;
        cin >> s;
        // txt[i] = s;
        txt.push_back(s);
    }

    for (int i=0; i<x; i++) {
        int a, b;
        cin >> a;
        cin >> b;

        txt.at(a-1) = txt.at(a-1) + txt.at(b-1);
        txt.at(b-1) = "";
        
        // resIdx = a;
        n = a;
        
    }

    cout << txt.at(n-1) << endl;
    
}