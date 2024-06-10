#include "iostream"
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;


void split(string txt, vector<string> &strs) {
    char sep = ' ';
    int pos = txt.find(sep);
    int sliceIdx = 0;

    while (pos != string::npos) {

        strs.push_back(txt.substr(sliceIdx, pos - sliceIdx));

        sliceIdx = pos + 1;

        pos = txt.find(sep, sliceIdx);
    }

    strs.push_back(txt.substr(sliceIdx, txt.size()));
}

int main() {

    string n, txt;
    vector<string> strs;
    getline(cin, n);
    getline(cin, txt);

    split(txt, strs);

    int r = 13 % stoi(n);

    cout << strs.at(r-1) << endl;

}