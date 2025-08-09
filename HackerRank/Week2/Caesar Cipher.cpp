#include <bits/stdc++.h>
using namespace std;

string caesarCipher(string s, int k) {
    k = k % 26;
    for (int i = 0; i < s.length(); i++) {
        if (isalpha(s[i])) {
            char base = isupper(s[i]) ? 'A' : 'a';
            s[i] = char((s[i] - base + k) % 26 + base);
        }
    }
    return s;
}

int main() {
    int n, k;
    cin >> n;
    cin.ignore(); 
    string s;
    getline(cin, s);
    cin >> k;
    cout << caesarCipher(s, k);
    return 0;
}
