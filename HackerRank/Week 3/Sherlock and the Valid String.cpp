#include <bits/stdc++.h>

using namespace std;


string isValid(string s) {
    int alpha[26]={0};
    for(char&c :s){
        alpha[c-97]++;
    }
    int count=0, invalid_count=0;
    for(int i=0;i<26;i++){
        if(alpha[i]>0){
            if(count==0) count=alpha[i];
            else if(count>0 && count!=alpha[i]) invalid_count++;
            
            if(invalid_count>1 || alpha[i]-count>1){
                return "NO";
            }
        }
    }
    return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
