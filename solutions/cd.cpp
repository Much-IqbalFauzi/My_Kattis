#include "iostream"
#include "vector"
#include "stdio.h"
#include "algorithm"
#include "iterator"

using namespace std;


int main() {
    while (true) {

        int n,m;
        scanf("%d %d", &n, &m);
        if ((n == 0) && (m == 0)) {
            break;
        }

        vector<int> v, v2, set;

        int i;
        while (n--) {
            cin >> i;
            v.push_back(i);
        }

        int i2;
        while (m--) {
            cin >> i2;
            v2.push_back(i2);
        }

        set_intersection(v.begin(), v.end(), v2.begin(), v2.end(), back_inserter(set));

        cout << set.size() << "\n";

    }
    return 0;
}