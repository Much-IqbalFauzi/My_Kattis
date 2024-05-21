#include "iostream"

using namespace std;

int main() {

    double num;

    cin >> num;

    if (num >= 0 && num<= 0.2) {
        cout << "Logn" << endl;
    } else if (num >= 0.3 && num<= 1.5) {
        cout << "Andvari" << endl;
    } else if (num >= 1.6 && num<= 3.3) {
        cout << "Kul" << endl;
    } else if (num >= 3.4 && num<= 5.4) {
        cout << "Gola" << endl;
    } else if (num >= 5.5 && num<= 7.9) {
        cout << "Stinningsgola" << endl;
    } else if (num >= 8.0 && num<= 10.7) {
        cout << "Kaldi" << endl;
    } else if (num >= 10.8 && num<= 13.8) {
        cout << "Stinningskaldi" << endl;
    } else if (num >= 13.9 && num<= 17.1) {
        cout << "Allhvass vindur" << endl;
    } else if (num >= 17.2 && num<= 20.7) {
        cout << "Hvassvidri" << endl;
    } else if (num >= 20.8 && num<= 24.4) {
        cout << "Stormur" << endl;
    } else if (num >= 24.5 && num<= 28.4) {
        cout << "Rok" << endl;
    } else if (num >= 28.5 && num<= 32.6) {
        cout << "Ofsavedur" << endl;
    } else {
        cout << "Farvidri" << endl;
    }
}