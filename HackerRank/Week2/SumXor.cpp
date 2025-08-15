#include <bits/stdc++.h>

using namespace std;

long sumXor(long n) {
    long count = 0;
    while (n) {
        if ((n & 1) == 0) count++;
        n >>= 1;
    }
    return 1LL << count;
}

int main()
{
    long n;
    cin>>n;
    cout<<sumXor(n);
    return 0;
}
