#include <iostream>
#include <set>
#include <string>

using namespace std;

void combination(string left, string right, set<string> &set) {
    if (right.size() == 0)
        set.insert(left);
    for (int i = 0; i < right.size(); i++) {
        string l = left + right[i];
        string r = right.substr(0, i) + right.substr(i + 1);
        combination(l, r, set);
    }
}

int main() {
    string s;
    cin >> s;
    set<string> set;
    combination("", s, set);
    cout << set.size() << endl;
    for (auto it : set) {
        cout << it << endl;
    }
}