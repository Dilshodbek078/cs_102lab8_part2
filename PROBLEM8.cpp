#include <iostream>
using namespace std;

char toLower(const char c) {
    if (c >= 'A' && c <= 'Z')
        return c + 32;
    return c;
}


void countChar(const char* str, int& vowelCount, int& consonantCount) {
    vowelCount = 0;
    consonantCount = 0;

    const char* ptr = str;
    while (*ptr != '\0') {
        char ch = toLower(*ptr);

        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowelCount++;
            else
                consonantCount++;
        }

        ptr++; 
    }
}

int main() {
    char str[1000];
    int vowels, consonants;

    cout << "Enter a string: ";
    cin.getline(str, 1000);

    countChar(str, vowels, consonants);

    cout << "Vowels: " << vowels << "  Consonants: " << consonants << endl;

    return 0;
}
