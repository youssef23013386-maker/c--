#include <iostream>
using namespace std;

void printEvenIndices(int arr[], int index) {
    if (index < 0) return;
    if (index % 2 == 0) {
        cout << arr[index] << " ";
    }
    printEvenIndices(arr, index - 1);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    printEvenIndices(arr, n - 1);
    return 0;
}