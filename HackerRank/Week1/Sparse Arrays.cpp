#include <bits/stdc++.h>
using namespace std;

// vector<int> sparsearray(vector<string> strings, vector<string> queries) {
//     vector<int> vec;
//     for (int i = 0; i < queries.size(); i++) {
//         int k = 0;
//         for (int j = 0; j < strings.size(); j++) {
//             if (queries[i] == strings[j]) {
//                 k++;
//             }
//         }
//         vec.push_back(k);
//     }
//     return vec;
// }

vector<int> sparsearray(vector<string> strings, vector<string>queries){
    unordered_map<string,int> freq;
    for(const string &s : strings){
        freq[s]++;
    }
    vector<int> vec;
    for(const string &q : queries){
        vec.push_back(freq[q]);
    }
    return vec;
}
int main() {
    int n;
    cin >> n;
    cin.ignore(); 

    vector<string> strings(n);
    for (int i = 0; i < n; i++) {
        getline(cin, strings[i]);
    }

    int m;
    cin >> m;
    cin.ignore(); 

    vector<string> queries(m);
    for (int i = 0; i < m; i++) {
        getline(cin, queries[i]);
    }

    vector<int> vec = sparsearray(strings, queries);
    for (int i = 0; i<vec.size(); i++) {
        cout << vec[i] << endl;
    }

    return 0;
}
