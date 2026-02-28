#include <iostream>
#include <string>
using namespace std;

string toBinary(int n) {
    if (n == 0) return "";
    return toBinary(n / 2) + to_string(n % 2);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 0) cout << "0" << endl;
        else cout << toBinary(n) << endl;
    }
    return 0;
}