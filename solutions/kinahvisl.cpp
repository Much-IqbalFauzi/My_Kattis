#include "iostream"

using namespace std;

int main() {
    string first, end;
    cin >> first;
    cin >> end;

    int count = 1; 
    for (int i=0; i<first.length(); i++) {
        if (first[i] != end[i]) {
            count ++ ;
        }
    }
    cout << count << endl;
}