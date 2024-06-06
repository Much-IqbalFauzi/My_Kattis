#include "iostream"
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n = 3;
    vector<int> position;
    while (n--) {
        int i;
        cin >> i;
        position.push_back(i);
    }

    int total = 0;
    while (1) {
        int first, end, mid, temp;
        temp = *position.begin();
        
        if (*(position.begin()+1)-temp > position.back()-*(position.begin()+1)) {
            position.pop_back();
        } else {
            position.erase(position.begin());
        }

        first = *position.begin();
        end = position.back();
        mid = first+1;
        if (find(position.begin(), position.end(), mid) != position.end()) {
            break;
        } else {
            total ++;
            position.insert(position.begin()+1, mid);
        }
    }

    cout << total << endl;
}