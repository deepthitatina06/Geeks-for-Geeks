// User function Template for C++
class Solution {
  public:
    string reverseString(string& s) {
        // code here
        int n = s.length();
        int start = 0;
        int end = n-1;
        while(start<end)
        {
            char temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++;
            end--;
        }
        return s;
    }
};
