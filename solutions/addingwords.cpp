#include "iostream"
#include <map>
#include <string>
#include <utility>
#include <vector>

using namespace std;

void split(string txt, vector<string> &strs) {
    char sep = ' ';
    int pos = txt.find(sep);
    int sliceIdx = 0;

    while (pos != string::npos) {
        strs.push_back(txt.substr(sliceIdx, pos - sliceIdx));
        sliceIdx = pos + 1;
        pos = txt.find(sep, sliceIdx);
    }

    strs.push_back(txt.substr(sliceIdx, txt.size()));
}

string find_key(map<string, int> & map, int value) {
    string found = "-1";

    for (auto & item : map) {
        if (item.second == value)  {
            found = item.first;
            break;
        }
    }

    return found;
}

void take_input(vector<string> & statement) {
    string n;
    getline(cin, n);

    split(n, statement);
}

void type_def(map<string, int> & var, vector<string> &statement) {
    if (var.find(statement.at(1)) == var.end()) {
        var.insert(make_pair(statement.at(1), stoi(statement.at(2))));
    } else {
        var[statement.at(1)] = stoi(statement.at(2));
    }
    //clear memory
    statement.clear();
}

void type_calc(map<string, int> & var, vector<string> & statement) {
    
    statement.erase(statement.begin());
    statement.erase(statement.end());

    bool calculate = true;
    int res = 0;
    string op = "+";

    // show calculation
    for (int i=0; i<statement.size(); i++) {
        cout << statement.at(i) << " ";

        if (!calculate) {
            continue;
        }

        if (i%2 == 1) {
            op = statement.at(i);
            continue;
        }

        if (var.find(statement.at(i)) == var.end()) {
            calculate = false;
            continue;
        }

        if (op == "+") {
            res += var.at(statement.at(i));
        } else {
            res -= var.at(statement.at(i));
        }
    }

    if (!calculate) {
        cout << "= unknown" << endl;
        return;
    } 
    
    string varName = find_key(var, res);
    if (varName != "-1") {
        cout << "= " << varName << endl;
    } else {
        cout << "= unknown" << endl;
    }

    //clear memory
    statement.clear();
}


int main() {

    map<string, int>var;
    while (1) {
        vector<string> statement;

        take_input(statement);
        
        if (*statement.begin() == "def") {
            type_def(var, statement);
        }

        if (*statement.begin() == "calc") {
            type_calc(var, statement);
        }
        
        if (*statement.begin() == "clear") {
            var.clear();
        }

        if (statement.begin()->length() == 0) {
            break;
        }
    }

    return 0;
}