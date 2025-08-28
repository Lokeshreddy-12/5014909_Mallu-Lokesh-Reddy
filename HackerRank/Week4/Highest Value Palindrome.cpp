#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string highestValuePalindrome(string s, int n, int k) {
    if (k >= n) {
        return string(n, '9');
    }

    vector<bool> changed(n, false);
    int left = 0;
    int right = n - 1;
\
    while (left < right) {
        if (s[left] != s[right]) {
            if (k <= 0) {
                return "-1";
            }
            if (s[left] > s[right]) {
                s[right] = s[left];
            } else {
                s[left] = s[right];
            }
            changed[left] = true;
            k--;
        }
        left++;
        right--;
    }

    left = 0;
    right = n - 1;

    while (left <= right) {
        if (k <= 0) {
            break;
        }

        if (left == right) {
            s[left] = '9';
            k--;
        } else {
            if (s[left] != '9') {
                if (changed[left]) {
                    s[left] = s[right] = '9';
                    k--;
                } else if (k >= 2) {
                    s[left] = s[right] = '9';
                    k -= 2;
                }
            }
        }
        left++;
        right--;
    }

    return s;
}

int main() {
    string s;
    int n, k;
    cin >> n >> k >> s;

    string result = highestValuePalindrome(s, n, k);
    cout << result << endl;

    return 0;
}
