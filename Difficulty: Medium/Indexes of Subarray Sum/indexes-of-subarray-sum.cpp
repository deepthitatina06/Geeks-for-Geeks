class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
    long long sum = 0;
    int left = 0;

    for (int right = 0; right < arr.size(); right++) {
        sum += arr[right];

        while (sum > target && left <= right) {
            sum -= arr[left];
            left++;
        }

        if (sum == target) {
            return {left + 1, right + 1}; // 1-based indexing
        }
    }

    return {-1};
}

    
};