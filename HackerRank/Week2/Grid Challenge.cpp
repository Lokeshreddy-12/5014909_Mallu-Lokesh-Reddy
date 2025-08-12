#include <bits/stdc++.h>

using namespace std;
string gridChallenge(vector<string> grid) {
    for(int i=0;i<grid.size();i++){
        sort(grid[i].begin(),grid[i].end());
    }
    
    for (int col = 0; col < grid[0].size(); col++) {
        for (int row = 0; row < grid.size() - 1; row++) {
            if (grid[row][col] > grid[row + 1][col]) {
                return "NO";
            }
        }
    }
    return "YES";
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cin.ignore(); 
        vector<string> grid(n);
        for(int i=0;i<n;i++){
            getline(cin,grid[i]);
        }
        string result = gridChallenge(grid);
        cout<<result<<"\n";
    }
    return 0;
}

