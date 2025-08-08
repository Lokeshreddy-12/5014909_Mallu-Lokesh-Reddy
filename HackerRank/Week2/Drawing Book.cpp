#include <bits/stdc++.h>

using namespace std;

int pageCount(int n, int p) {
    return min(p/2, (n/2)-(p/2));
}

int main()
{
   int n,p;
   cin>>n>>p;
   cout<<pageCount(n,p);
   return 0;
}
