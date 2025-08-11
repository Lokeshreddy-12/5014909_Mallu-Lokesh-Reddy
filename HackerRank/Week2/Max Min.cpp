#include <bits/stdc++.h>

using namespace std;


int maxMin(int k, vector<int> arr) {
    sort(arr.begin(),arr.end());
    int min_diff = INT_MAX;
    int i=0, j=k-1;
    while(j<arr.size()){
        min_diff = min(min_diff,arr[j]-arr[i]);
        i++;
        j++;
    }
    return min_diff ;
}

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxMin(k,arr);
}
