#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int q;
    cin>>q;
    vector<int> vec;
    while(q){
        int operation;
        cin>>operation;
        if(operation==1){
            int num;
            cin>>num;
            vec.push_back(num);
        }else if(operation==2){
            vec.erase(vec.begin());
        }else{
            cout<<vec.front()<<"\n";
        }
        q--;
    } 
    return 0;
}
