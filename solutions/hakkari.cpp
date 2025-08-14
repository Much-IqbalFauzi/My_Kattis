#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int x, y;

    cin >> x;
    cin >> y;

    int total = 0;
    vector<string> nums;

    for (int i=0; i<=x; i++) {
        string line;
        getline(cin, line);
        for (int j=0; j<line.length(); j++) {
            if (line[j] == '*') {
                total ++;
                string res = to_string(i) + " " + to_string(j+1);
                nums.push_back(res);
            }
        }
    }

    cout << nums.size() << endl;

    for (string &item: nums) {
        cout << item << endl;
    }
}