#include "iostream"
#include "vector"

using namespace std;

int main() {
    
    int loop;

    vector<int> nums;
    
    cin >> loop;

    while (loop--) {
        string action;
        int num;

        cin >> action;
        cin >> num;

        if (action == "push_front") {
            nums.insert(nums.begin(), num);
        } else if (action == "push_back") {
            nums.push_back(num);
        } else if (action == "push_middle") {
            int size = (int) ((double) nums.size() / 2 + 0.5);
            nums.insert(nums.begin() + size, num);
        } else {
            cout << nums.at(num) << endl;
        }
    }

    return 0;

}