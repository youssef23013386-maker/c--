#include <iostream>
using namespace std;

void printRow(int spaces, int stars) {
    if (spaces > 0) {
        cout << " ";
        printRow(spaces - 1, stars);
    } else if (stars > 0) {
        cout << "*";
        printRow(0, stars - 1);
    }
}

void printPyramid(int n, int current) {
    if (current > n) return;
    printRow(n - current, 2 * current - 1);
    cout << endl;
    printPyramid(n, current + 1);
}

int main() {
    int n;
    cin >> n;
    printPyramid(n, 1);
    return 0;
}