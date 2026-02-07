#include "iostream"
#include "string"
#include "vector"
#include "format"
#include <algorithm>

using namespace std;

void split(string txt, vector<string> &strs) {
    char sep = ' ';
    int posSliceEnd = txt.find(sep);
    int sliceStart = 0;

    while (posSliceEnd != string::npos) {
        strs.push_back(txt.substr(sliceStart, posSliceEnd - sliceStart));
        sliceStart = posSliceEnd + 1;
        posSliceEnd = txt.find(sep, sliceStart);
    }

    strs.push_back(txt.substr(sliceStart, txt.size()));
}

string take_input(bool & loop) {
    string n;

    getline(cin, n);

    return n;
}

int main() {
    int total = 0, ans = 0;
    
    bool loop = true;
    string seqWrong = "";
    vector<char> opt;

    while (loop) {
        string n = take_input(loop);

        if (n == "-1") {
            loop = false;
            break;
        }

        vector<string> strs;
        split(n, strs);
        
        if (strs[2] == "right") {
            ans ++;
            total += stoi(strs[0]);
            opt.push_back(strs[1][0]);
        }

        if (strs[2] == "wrong") {
            seqWrong += strs[1];
        }
    }

    for (int i = 0; i < opt.size(); i++) {
        total += count(seqWrong.begin(), seqWrong.end(), opt[i]) * 20;
    }

    cout << format("{0} {1}", ans, total) << endl;
}