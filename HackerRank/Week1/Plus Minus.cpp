#include <bits/stdc++.h>

using namespace std;

void plusMinus(vector<int> arr) {
    float pos=0,neg=0,zero=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>0){
            pos++;
        }else if(arr[i]<0){
            neg++;
        }else{
            zero++;
        }
    }
    cout<<pos/arr.size()<<endl<<neg/arr.size()<<endl<<zero/arr.size()<<endl;
}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    plusMinus(arr);
}
