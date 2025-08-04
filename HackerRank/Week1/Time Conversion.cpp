#include <iostream>
#include <string>
using namespace std;

string timeConversion(string s){
    int hour = stoi(s.substr(0,2));

    if(s.substr(8,2)=="AM"){
        if(hour==12){
            hour=0;
        }
    }else{
        if(hour!=12){
            hour+=12;
        }
    }
    string hourString = to_string(hour);
    if(hourString.length()==1){
        hourString = "0"+hourString;
    }
    string ans = hourString+s.substr(2,6);
    return ans;
}

int main(){
    string s;
    getline(cin,s);
    cout<<timeConversion(s);
}
