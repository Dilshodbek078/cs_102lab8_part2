#include <iostream>
#include <string>
using namespace std;

int count(const string& s, char a) {
    int c = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == a) {
            c++;
        }
    }
    return c;
}

int main() {
    char a;
    string s;

    cout << "Enter a character: ";
    cin >> a;

    cin.ignore();

    cout << "Enter a string: ";
    getline(cin, s);

    cout << "Output: " << count(s, a) << endl;

    return 0;
}
