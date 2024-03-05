#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array in non-decreasing order
    sort(arr.begin(), arr.end());

    // Calculate the prefix sum of the array
    vector<int> prefix_sum(n);
    prefix_sum[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefix_sum[i] = prefix_sum[i-1] + arr[i];
    }

    // Calculate the sum of all integers less than arr[i]
    vector<int> ans(n);
    for (int i = 0; i < n; i++) {
        int index = upper_bound(arr.begin(), arr.end(), arr[i]) - arr.begin();
        ans[i] = prefix_sum[index-1] - arr[i]*(index-1);
    }

    // Print the answer
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}
