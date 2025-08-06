#include <bits/stdc++.h>

using namespace std;


vector<int> countingSort(vector<int> arr) {
    vector<int> res(100, 0);
    for(int num:arr){
        res[num]++;
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> res= countingSort(arr);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}