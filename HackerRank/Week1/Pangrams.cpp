#include <bits/stdc++.h>
using namespace std;
string pangrams(string s) {
    bool seen[26]={false};
    int unique_count=0;
    for(char c:s){
        if(isalpha(c)){
            int index = tolower(c)-'a';
            if(!seen[index]){
                seen[index]=true;
                unique_count++;
                if(unique_count==26){
                    return "pangram";
                }
            }
        }
    }
    return unique_count==26 ? "pangram" : "not pangram";
}
int main()
{
    string s;
    getline(cin, s);
    string result = pangrams(s);
    cout << result << "\n";
    return 0;
}