class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
    deque<int> dq;
    vector<int> result;

    for(int i = 0; i < arr.size(); i++) {

        // 1. Remove elements out of window
        if(!dq.empty() && dq.front() == i - k)
            dq.pop_front();

        // 2. Remove smaller elements from back
        while(!dq.empty() && arr[dq.back()] < arr[i])
            dq.pop_back();

        // 3. Add current element index
        dq.push_back(i);

        // 4. Add max to result (when window is complete)
        if(i >= k - 1)
            result.push_back(arr[dq.front()]);
    }

    return result;
}

    
};