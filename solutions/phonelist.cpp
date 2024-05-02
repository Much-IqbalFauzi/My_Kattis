#include "iostream"
#include "vector"
#include <algorithm>

using namespace std;

void checksubs(vector<string> * nums) {
    string newNum;
    cin >> newNum;
    nums->push_back(newNum);
}

int main() {

    int loop;
    cin >> loop;

    while (loop--) {
        int total;
        cin >> total;

        string unique = "YES";

        vector<string> nums;

        while (total--) {
            checksubs(&nums);
        }

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 1; i++) {
            string next = nums[i+1].substr(0, nums[i].size());
            if (nums[i] == next) {
                unique = "NO";
                break;
            }
        }

        cout << unique << endl;
    }
}