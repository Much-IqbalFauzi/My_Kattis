#include "iostream"
#include <cctype>
#include <string>

using namespace std;

int main() {
    string email;
    getline(cin, email);
    
    for (string::iterator it=email.begin(); it != email.end(); it++ ) {
        if (!isspace(*it)) {
            cout << *it;
        }
    }
}