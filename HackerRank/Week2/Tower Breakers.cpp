#include <bits/stdc++.h>

using namespace std;
int towerBreakers(int n, int m) {
    if(m==1 || n%2==0){
        return 2;
    }
    return 1;
}
int main() {
    int t;
    cin>>t;
    while(t > 0) {
        int n, m;
        cin>>n>>m;
        cout<<towerBreakers(n, m)<<"\n";
        t--;
    }   
    return 0;
}

