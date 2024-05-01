#include "iostream"
#include "vector"
#include <algorithm>
#include <iterator>

using namespace std;

void checksubs(string * result, string * sortest) {
    string newNum;
    cin >> newNum;

    if (*sortest == ""  || sortest->length() > newNum.length()) {
        *sortest = newNum;
    }

    int res1 = newNum.find(*sortest);
    int res2 = sortest->find(newNum);

    if ((res1==0 || res2==0) && *sortest != newNum) {
        *result = "NO";
    }

}


int main() {

    int loop;
    cin >> loop;

    while (loop--) {
        int total;
        cin >> total;

        string result = "YES";
        string sortest = "";

        while (total--) {
            checksubs( &result, &sortest);
        }

        cout << result << endl;
    }
}