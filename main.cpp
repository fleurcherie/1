#include <iostream>
#include <vector>
using namespace std;

int main() {
    int k = 0;
    int a;
    cin >> a;
    vector <int> v(a);
    for (int i = 0; i < a; i++) {
        cin >> v[i];
    }
    for (int i = 1; i < a-1; i++) {
        if (v[i] > v[i+1] && v[i] > v[i-1]) {
            k+=1;
        }
    }
    cout << k << endl;
    return 0;
}