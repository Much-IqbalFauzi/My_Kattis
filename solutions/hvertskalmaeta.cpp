#include "iostream"
#include <map>
#include <string>

using namespace std;

int main() {

    string name;
    cin >> name;
    map<string, string> municipalities {
        {"Reykjavik", "Reykjavik"},
        {"Kopavogur", "Reykjavik"},
        {"Hafnarfjordur", "Reykjavik"},
        {"Reykjanesbaer", "Reykjavik"},
        {"Akureyri", "Akureyri"},
        {"Gardabaer", "Reykjavik"},
        {"Mosfellsbaer", "Reykjavik"},
        {"Arborg", "Reykjavik"},
        {"Akranes", "Reykjavik"},
        {"Fjardabyggd", "Akureyri"},
        {"Mulathing", "Akureyri"},
        {"Seltjarnarnes", "Reykjavik"},
    };

    cout << municipalities[name] << endl;
}