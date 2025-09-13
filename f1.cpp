#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    char m = s[0];
    for (int i = 1; i < size(s); i++) {
        if (m < s[i]) {
            m = s[i];
        }
    }
    cout << m << endl;
    return 0;
}
