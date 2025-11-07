#include <iostream>
using namespace std;

int countUnique(const char s[]) {
    int seen[26] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        int index = s[i] - 'A';
        seen[index] = 1;
    }


    int count = 0;
    for (int i = 0; i < 26; i++) {
        count += seen[i];
    }

    return count;
}

int main() {
    char str[1000];

    cout << "Enter a string (uppercase letters only): ";
    cin.getline(str, 1000);

    cout << "Number of authentic characters: " << countUnique(str) << endl;

    return 0;
