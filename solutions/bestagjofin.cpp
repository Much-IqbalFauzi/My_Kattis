#include "iostream"

using namespace std;

int main() {

    int n;
    cin >> n;

    string tempName = "";
    int tempGift = 0;

    while(n--) {
        string name;
        int gift;

        cin >> name;
        cin >> gift;

        if (gift >= tempGift) {
            tempGift = gift;
            tempName = name;
        }
    }

    cout << tempName << endl;
}