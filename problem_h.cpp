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

void printInvertedPyramid(int n, int current) {
    if (current == 0) return;
    printRow(n - current, 2 * current - 1);
    cout << endl;
    printInvertedPyramid(n, current - 1);
}

int main() {
    int n;
    cin >> n;
    printInvertedPyramid(n, n);
    return 0;
}