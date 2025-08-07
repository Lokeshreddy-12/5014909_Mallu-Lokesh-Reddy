#include <iostream>
#include <vector>
#include <algorithm> 
#include <functional> 

using namespace std;

string twoArrays(int k, vector<int> A, vector<int> B) {
    sort(A.begin(),A.end());
    sort(B.begin(), B.end(), greater<int>());
    
    for(int i=0;i<A.size();i++){
        if(A[i]+B[i]<k) return "NO";
    }
    return "YES";
}

int main(){
    int q;
    cin>>q;
    while(q){
        int n , k;
        cin>>n;
        cin>>k;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        string res =twoArrays(k,a,b);
        cout<<res<<"\n";
        q--;
    }
    return 0;
}