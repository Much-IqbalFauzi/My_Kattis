#include "iostream"

using namespace std;

void print_num_digit(int num, int *total) {
    
    if (num >= 10) {
        print_num_digit(num / 10,  total);
    }
    int digit = num % 10;

    if (digit > 0) {

        *total *= digit;
    }
}

int main() {

    int n;
    cin >> n;

    int total = 1, a = 0;

    while (n>=10) {
        print_num_digit(n,  &total);
        n = total;
        total = 1;
    }

    cout << n << endl;
    
}