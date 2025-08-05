#include <bits/stdc++.h>

using namespace std;


int lonelyinteger(vector<int> a) {
    unordered_map<int, int> uniq;
    for(const auto &i : a){
        uniq[i]++;
    }
    for(const auto &i: uniq){
        if(i.second==1){
            return i.first;
        }
    }
    return -1;
}


int main()
{
    int n;
    cin>>n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }

    int result = lonelyinteger(a);

    cout << result << "\n";

    return 0;
}