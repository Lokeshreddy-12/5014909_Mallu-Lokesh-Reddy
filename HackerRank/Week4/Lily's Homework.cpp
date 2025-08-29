#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int count_swaps(vector<int> arr, const vector<int>& sorted_arr) {
    int n = arr.size();
    unordered_map<int, int> pos;
    for (int i = 0; i < n; ++i) {
        pos[arr[i]] = i;
    }

    int swaps = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] != sorted_arr[i]) {
            swaps++;
            int current_val = arr[i];
            int correct_val = sorted_arr[i];
            int correct_pos = pos[correct_val];

            pos[current_val] = correct_pos;
            pos[correct_val] = i;

            swap(arr[i], arr[correct_pos]);
        }
    }
    return swaps;
}

int lilysHomework(vector<int> arr) {
    int n = arr.size();

    vector<int> arr_asc = arr;
    sort(arr_asc.begin(), arr_asc.end());
    int swaps_asc = count_swaps(arr, arr_asc);

    vector<int> arr_desc = arr;
    sort(arr_desc.begin(), arr_desc.end(), greater<int>());
    int swaps_desc = count_swaps(arr, arr_desc);
    
    return min(swaps_asc, swaps_desc);
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = lilysHomework(arr);
    cout << result << endl;

    return 0;
}
