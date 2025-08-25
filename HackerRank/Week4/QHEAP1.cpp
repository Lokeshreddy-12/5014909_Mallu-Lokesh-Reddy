#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main() {
    int Q;
    cin>>Q;
    multiset<int> s;
     while(Q--){
        int querey;
        cin>>querey;
        if(querey==1){
            int input;
            cin>>input;
            s.insert(input);
        }else if(querey==2){
            int del;
            cin>>del;
            s.erase(s.find(del)); 
        }else if(querey==3){
            cout<<*s.begin()<<"\n";
        }
     }
    return 0;
}