#include <bits/stdc++.h>

using namespace std;

int diagonalDifference(vector<vector<int>> arr,int n) {
    int diagonal1 =0;
    int diagonal2 = 0;
    for(int i=0;i<n;i++){
        diagonal1+=arr[i][i];
        diagonal2+=arr[i][n-i-1];
    }
    return abs(diagonal1-diagonal2);
}

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> arr(n, vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int res= diagonalDifference(arr,n);
    cout<<res<<"\n";
    return 0;
}