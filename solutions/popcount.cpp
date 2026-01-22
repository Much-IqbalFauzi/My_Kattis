#include "iostream"
#include "string"

using namespace std;

int countSubs(string& str, string& sub) {
    if (sub.empty()) return 0;

    int count = 0;

    int position = 0;
    while ((position = str.find(sub, position)) != string::npos) {
        count ++;
        position += sub.length();
    }

    return count;
}

int main() {
    string line;
    cin >> line;

    string sub = "1";

    int findings = countSubs(line, sub);

    cout << findings << endl;

    return 0;
}