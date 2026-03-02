#include "iostream"
#include "vector"

using namespace std;

int main() {
    int n, total = 0, sep = 3;
    cin >> n;
    vector<int> seq;

    if (n%3 >= 2) {
        sep = 2;
    } else {
        sep = 3;
    }

    for (int i=1; i<=n; i++) {
        int c;
        cin >> c;

        seq.push_back(c);

        if (i%sep != 0) {
            continue;
        }

        sort(seq.begin(), seq.end());
        for (int j=1; j<seq.size(); j++) {
            total += seq[j];
        }
        seq = {};
    }

    for (int j=0; j<seq.size(); j++) {
        total += seq[j];
    }

    cout << total << endl;
}