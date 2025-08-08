#include <bits/stdc++.h>

using namespace std;

int sockMerchant(int n, vector<int> ar) {
    unordered_map<int, int> m;
    for(int num:ar){
        m[num]++;
    }
    int res=0;
    for(auto i: m){
       res+=i.second/2; 
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    cout<<sockMerchant(n,ar);

    return 0;
}
