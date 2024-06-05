#include "iostream"
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    string ans;
    cin >> ans;

    string a = "ABC";
    int al = a.length();
    string b = "BABC";
    int bl = b.length();
    string g = "CCAABB";
    int gl = g.length();

    int corr[] = {0, 0, 0};

    map<string, int> students {{"Adrian", 0}, {"Bruno", 0}, {"Goran", 0}};

    for (int i=0; i<n; i++) {

        if (a[i%al] == ans[i]) {
            corr[0] += 1;
            students["Adrian"] += 1;
        }

        if (b[i%bl] == ans[i]) {
            corr[1] += 1;
            students["Bruno"] += 1;
        }

        if (g[i%gl] == ans[i]) {
            corr[2] += 1;
            students["Goran"] += 1;
        }
    }

    int size = sizeof(corr) / sizeof(corr[0]);
    sort(corr, corr + size);
    
    cout << corr[2] << endl;
    for (auto &item : students) {
        if (item.second == corr[2]) {
            cout << item.first << endl;
        }
    }
}