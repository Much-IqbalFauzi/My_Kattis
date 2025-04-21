#include "iostream"

using namespace std;

int main() {

    
    int n;
    cin >> n;
    int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    cout << month[n-1];
}