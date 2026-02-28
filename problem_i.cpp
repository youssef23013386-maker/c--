#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int countVowels(string s, int index) {
    if (index < 0) return 0;
    return (isVowel(s[index]) ? 1 : 0) + countVowels(s, index - 1);
}

int main() {
    string s;
    getline(cin, s);
    cout << countVowels(s, s.length() - 1) << endl;
    return 0;
}