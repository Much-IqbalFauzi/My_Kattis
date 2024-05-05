#include "iostream"
#include <algorithm>
#include <vector>

using namespace std;

int main() {


    int n;

    cin >> n;

    vector<int> nums;

    while(n--) {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    sort(nums.begin(), nums.end());

    int temp = nums[0];
    int count = 0;
    cout << temp;
    for (int i=1; i < nums.size(); i++) {
        if (nums[i] - 1 == temp && nums[i] == nums[i+1] - 1) {
            temp = nums[i];
            count ++;
        } else if (nums[i] - 1 == temp && nums[i] != nums[i+1] - 1) {
            if (count >= 1) {
                cout << "-" ;
            } else {
                cout << " ";
            }
            cout << nums[i];
            count = 0;
        } else {
            cout << " " << nums[i];
        }
        temp = nums[i];
    }
    return 0;
}