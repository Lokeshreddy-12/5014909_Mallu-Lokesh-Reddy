#include <bits/stdc++.h>
using namespace std;

int cookies(int k, vector<int> A) {
    priority_queue<int, vector<int>, greater<int>> pq(A.begin(), A.end()); // min-heap
    int iterations = 0;

    while (pq.size() > 1 && pq.top() < k) {
        int least = pq.top(); pq.pop();
        int second = pq.top(); pq.pop();
        int val = least + 2 * second;
        pq.push(val);
        iterations++;
    }

    if (pq.top() >= k) return iterations;
    return -1;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> A(n);
    for (int i = 0; i < n; i++) cin >> A[i];

    cout << cookies(k, A) << endl;
    return 0;
}