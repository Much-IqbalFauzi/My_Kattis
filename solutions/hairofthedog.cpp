#include "iostream"
#include "string"

using namespace std;

int main() {
    int n, drunk = 0;
    string lastAct = "sober";

    cin >> n;

    for (int i = 0; i < n; i++) {
        string act;
        cin >> act;

        if (lastAct != act && lastAct == "drunk") {
            drunk ++;
        }

        lastAct = act;
    }

    cout << drunk << endl;
}