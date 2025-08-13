#include <bits/stdc++.h>

#include <iostream>
using namespace std;

int superDigitHelper(long long num) {
    if (num < 10) return num;
    long long sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return superDigitHelper(sum);
}

int superDigit(string n, int k) {
    long long initialSum = 0;
    for (char ch : n) {
        initialSum += ch - '0';
    }
    long long total = initialSum * k;
    return superDigitHelper(total);
}

int main() {
    string n;
    int k;
    cin >> n >> k;
    cout << superDigit(n, k) << endl;
    return 0;
}
