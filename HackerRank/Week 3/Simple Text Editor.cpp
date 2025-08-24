#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int Q;
    cin >> Q;

    vector<pair<int, string>> history;  

    while (Q--) {
        int query;
        cin >> query;

        if (query == 1) {
            string subs;
            cin >> subs;
            s.append(subs);
            history.push_back({1, subs});  
        } 
        else if (query == 2) {
            int k;
            cin >> k;
            string removed = s.substr(s.length() - k); 
            s.erase(s.length() - k);
            history.push_back({2, removed});
        } 
        else if (query == 3) {
            int k;
            cin >> k;
            cout << s[k - 1] << '\n';
        } 
        else if (query == 4) {
            auto last = history.back();
            history.pop_back();

            if (last.first == 1) {
                
                s.resize(s.size() - last.second.size());
            } else if (last.first == 2) {
                
                s.append(last.second);
            }
        }
    }

    return 0;
}

