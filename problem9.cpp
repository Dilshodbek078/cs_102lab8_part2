#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, x = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string op;
        cin >> op;

        if (op == "++x" || op == "x++")
            x++;
        else if (op == "--x" || op == "x--")
            x--;
    }

    cout << x << endl;
    return 0;
}
