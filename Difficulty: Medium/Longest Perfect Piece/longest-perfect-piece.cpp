class Solution {
  public:
    int longestPerfectPiece(int arr[], int N) {
        // code here
    multiset<int> ms;
    int l = 0, ans = 0;

    for (int r = 0; r < N; r++) {
        ms.insert(arr[r]);

        while (*ms.rbegin() - *ms.begin() > 1) {
            ms.erase(ms.find(arr[l]));
            l++;
        }

        ans = max(ans, r - l + 1);
    }

    return ans;
}

    
};