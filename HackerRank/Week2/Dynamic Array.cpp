#include <iostream>
#include <vector>

using namespace std;


vector<int> dynamicArray(int n, const vector<vector<int>>& queries) {
    vector<vector<int>> arr(n); 
    vector<int> results;         
    int lastAnswer = 0;

    for (const auto& query : queries) {
        int type = query[0];
        int x = query[1];
        int y = query[2];

        int idx = (x ^ lastAnswer) % n;

        if (type == 1) {
            arr[idx].push_back(y); 
        } else if (type == 2) {
            int value = arr[idx][y % arr[idx].size()];
            lastAnswer = value;
            results.push_back(lastAnswer);  
        }
    }

    return results;
}

int main() {
    int n, q;
    cin >> n >> q;

    vector<vector<int>> queries;

    for (int i = 0; i < q; ++i) {
        int type, x, y;
        cin >> type >> x >> y;
        queries.push_back({type, x, y});
    }

    vector<int> result = dynamicArray(n, queries);


    for (int val : result) {
        cout << val << endl;
    }

    return 0;
}
