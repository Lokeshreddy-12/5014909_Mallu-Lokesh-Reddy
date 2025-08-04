#include <iostream>
#include <vector>
using namespace std;
void miniMaxSum(vector<int> arr) {
    long long totalSum =0;
    for(int i=0;i<arr.size();i++){
        totalSum+=arr[i];
    }
    long long minSum =totalSum, maxSum=0;
    for(int i=0;i<arr.size();i++){
        maxSum = max(maxSum,totalSum-arr[i]);
        minSum = min(minSum,totalSum-arr[i]);
    }
    cout<<"The minsum is: "<<minSum<<" and maxsum is: "<<maxSum<<endl;
}

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cout<<"Enter the array element at position " <<i+1<<" :";
        cin>>arr[i];
        cout<<endl;
    }
    miniMaxSum(arr);
    return 0;
}