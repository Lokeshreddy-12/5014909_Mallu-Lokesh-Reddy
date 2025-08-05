#include <bits/stdc++.h>

using namespace std;

unsigned int  flippingBits(unsigned int n) {
     return ~n;
}

int main(){
    int q;
    cin>>q;
    while(q){
        unsigned int n;
        cin>>n;
        unsigned int res = flippingBits(n);
        cout<<res<<"\n";
        q--;
    }
    return 0;
}