#include <bits/stdc++.h>

using namespace std;

int birthday(vector<int> s, int d, int m) {
    int window_sum =0;
    int res=0;
    for(int i=0;i<m;i++){
        window_sum+=s[i];
    }
    if(window_sum==d) res++;
    for(int i=m;i<s.size();i++){
        window_sum+=s[i]-s[i-m];
        if(window_sum==d) res++;
    }
    return res;
}

int main()
{
   int n;
   cin>>n;
   
   vector<int> s(n);
   for(int i=0;i<n;i++){
    cin>>s[i];
   }
   int d,m;
   cin>>d;
   cin>>m;
   
   int res = birthday(s, d, m);
   cout<<res<<"\n";
   return 0;
}
