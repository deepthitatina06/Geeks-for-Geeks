class Solution {
  public:
    bool isPowerofTwo(int n) {
        // code here
        return n > 0 && (n & (n - 1)) == 0;
}

int main() {
    int n;
    cin >> n;

    if (isPowerofTwo(n))
        cout << "true";
    else
        cout << "false";

    return 0;
}

    
};