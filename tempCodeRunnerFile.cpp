#include <iostream>
#include <string>
using namespace std;

// A. Print Recursion
void printRecursion(int n) {
    if (n == 0) return;
    cout << "I love Recursion" << endl;
    printRecursion(n - 1);
}

void problemA() {
    int n;
    cin >> n;
    printRecursion(n);
}

// B. Print from 1 to N
void print1toN(int n) {
    if (n == 0) return;
    print1toN(n - 1);
    cout << n << endl;
}

void problemB() {
    int n;
    cin >> n;
    print1toN(n);
}

// C. Print from N to 1
void printNto1(int n) {
    if (n == 0) return;
    cout << n;
    if (n > 1) cout << " ";
    printNto1(n - 1);
}

void problemC() {
    int n;
    cin >> n;
    printNto1(n);
    cout << endl;
}

// D. Print Digits using Recursion
void printDigits(long long n) {
    if (n < 10) {
        cout << n << " ";
        return;
    }
    printDigits(n / 10);
    cout << n % 10 << " ";
}

void problemD() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        printDigits(n);
        cout << endl;
    }
}

// E. Base Conversion
string toBinary(int n) {
    if (n == 0) return "";
    return toBinary(n / 2) + to_string(n % 2);
}

void problemE() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n == 0) cout << "0" << endl;
        else cout << toBinary(n) << endl;
    }
}

// F. Print Even Indices
void printEvenIndices(int arr[], int index) {
    if (index < 0) return;
    if (index % 2 == 0) {
        cout << arr[index] << " ";
    }
    printEvenIndices(arr, index - 1);
}

void problemF() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    printEvenIndices(arr, n - 1);
    cout << endl;
}

// G. Pyramid
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

void problemG() {
    int n;
    cin >> n;
    printPyramid(n, 1);
}

// H. Inverted Pyramid
void printInvertedRow(int spaces, int stars) {
    if (spaces > 0) {
        cout << " ";
        printInvertedRow(spaces - 1, stars);
    } else if (stars > 0) {
        cout << "*";
        printInvertedRow(0, stars - 1);
    }
}

void printInvertedPyramid(int n, int current) {
    if (current == 0) return;
    printInvertedRow(n - current, 2 * current - 1);
    cout << endl;
    printInvertedPyramid(n, current - 1);
}

void problemH() {
    int n;
    cin >> n;
    printInvertedPyramid(n, n);
}

// I. Count Vowels
bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int countVowels(string s, int index) {
    if (index < 0) return 0;
    return (isVowel(s[index]) ? 1 : 0) + countVowels(s, index - 1);
}

void problemI() {
    string s;
    cin.ignore();
    getline(cin, s);
    cout << countVowels(s, s.length() - 1) << endl;
}

// J. Factorial
long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

void problemJ() {
    int n;
    cin >> n;
    cout << factorial(n) << endl;
}

int main() {
    char problem;
    
    cout << "Enter problem letter (A-J): ";
    cin >> problem;
    
    switch(problem) {
        case 'A':
        case 'a':
            // Problem A: Print Recursion
            problemA();
            break;
            
        case 'B':
        case 'b':
            // Problem B: Print from 1 to N
            problemB();
            break;
            
        case 'C':
        case 'c':
            // Problem C: Print from N to 1
            problemC();
            break;
            
        case 'D':
        case 'd':
            // Problem D: Print Digits using Recursion
            problemD();
            break;
            
        case 'E':
        case 'e':
            // Problem E: Base Conversion
            problemE();
            break;
            
        case 'F':
        case 'f':
            // Problem F: Print Even Indices
            problemF();
            break;
            
        case 'G':
        case 'g':
            // Problem G: Pyramid
            problemG();
            break;
            
        case 'H':
        case 'h':
            // Problem H: Inverted Pyramid
            problemH();
            break;
            
        case 'I':
        case 'i':
            // Problem I: Count Vowels
            problemI();
            break;
            
        case 'J':
        case 'j':
            // Problem J: Factorial
            problemJ();
            break;
            
        default:
            cout << "Invalid problem letter! Please enter A-J" << endl;
    }
    
    return 0;
}