

#include "iostream"

using namespace std;

int main() {


    int n,m;

    cin >> n;
    cin >> m;

    int save = 0;

    while (n--) {
        int a, s;

        cin >> a;
        cin >> s;

        int total = a + s;
        int nearest = total / m;

        if (total >= (nearest * m) && a <= (nearest * m)) {
            save ++ ;
        }

    }
    cout << save << endl;

    return 0;
}