#include "iostream"

using namespace std;

int compute(int a, int b, char operation) {
    switch (operation) {
        case '+': return a + b;
        case '-': return a - b;
        case 'x': return a * b;
        case '/': return a / b;
    }
    return 0;
}

void show(int a, int b, int c, char symbol1, char symbol2) {
    cout << a << symbol1 << b << symbol2 << c << endl;
}

int main() {

    int a, b, c;
    char operation[4] = {'+', '-', 'x', '/'};

    cin >> a;
    cin >> b;
    cin >> c;

    // forced operation
    bool found = false;
    for (int i=0; i < 4; i++ ) {
        if (found) {
            break;
        }
        if (compute(a, b, operation[i]) == c) {
            show(a, b, c, operation[i], '=');
            found = true;
        } else if (compute(b, c, operation[i]) == a) {
            show(a, b, c, '=', operation[i]);
            found = true;
        }
    }
}