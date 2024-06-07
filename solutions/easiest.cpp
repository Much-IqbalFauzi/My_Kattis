#include "iostream"

using namespace std;


void eactDigit(int num, int *sum) {

    if (num >= 10) {
        eactDigit(num / 10, sum);
    }

    int digit = num % 10;

    *sum += digit;
}

void findNum(int n) {
    int i=11;
    int nSum = 0;
    eactDigit(n, &nSum);

    while (1) {
        int target = n * i;
        int targetSum = 0;
        eactDigit(target, &targetSum);

        if (targetSum == nSum) {
            cout << i << endl;
            break;
        }

        i++;
    }
}

int main() {
    int n;
    while (cin >> n && n != 0) {
        findNum(n);
    }
}