#include "iostream"
#include <map>

using namespace std;

int main() {

    map<string, int> words;
    while (1) {
        string operation;
        cin >> operation;
        if (operation == "clear") {
            break;
        }

        if (operation == "def") {
            string varName;
            cin >> varName;

            int num;
            cin >> num;

            words[varName] = num;
        } else {

            

        }

    }

    return 0;
}