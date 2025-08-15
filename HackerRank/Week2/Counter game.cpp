#include <bits/stdc++.h>

using namespace std;


string counterGame(long n) {
    int count = 0;
    while (n > 1) {
        if ((n & (n - 1)) == 0) {
            n /= 2;
        } else {
            long powof2 = pow(2, (long)log2(n));
            n -= powof2;
        }
        count++;
    }
    return (count % 2 == 0) ? "Richard" : "Louise";
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        cout<<counterGame(n)<<endl;
    }
    return 0;
}
