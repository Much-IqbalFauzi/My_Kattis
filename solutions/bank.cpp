#include "iostream"
#include "vector"

using namespace std;

int main() {

    int q, t;
    cin >> q;
    cin >> t;

    int total = 0;
    int time = 0;
    vector<int> keys;

    while (q--) {
        int val, temp;
        cin >> val;
        cin >> temp;

        bool exist = false;
        if ((time + temp) > t || find(keys.begin(), keys.end(), temp) != keys.end()) {
            exist = true;
        }

        if (!exist) {
            total += val;
            keys.push_back(temp);
            time += (temp + 1);
        }
    }

    cout << total << endl;

}