#include "iostream"
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<string> items({"keys", "phone", "wallet"});

    int n;
    cin >> n;

    while (n--) {
        string item;
        cin >> item;

        auto included = find(items.begin(), items.end(), item);
        if (included != items.end() ) {
            items.erase(included);
        }
    }

    if (items.empty()) {
        cout << "ready" << endl;
    } else {
        for (const string & item: items) {
            cout << item << endl;
        }
    }
}