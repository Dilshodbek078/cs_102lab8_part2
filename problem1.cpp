#include <iostream>
#include <string>
using namespace std;

void search(string& s, char& key) {
    bool b = false;


    for (int i = 0; i < s.length(); i++) {
        if (s[i] == key) {
            b = true;
            break;
        }
    }


    if (b)
        cout << "Found" << endl;
    else
        cout << "Not found" << endl;
}

int main() {
    string s;
    char k;

    cout << "Enter string: ";
    getline(cin, s);

    cout << "Enter key: ";
    cin >> k;

    search(s, k);
}
