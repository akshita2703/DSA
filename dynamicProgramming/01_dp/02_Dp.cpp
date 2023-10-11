#include <iostream>
#include <vector>

using namespace std;  // Adding the 'using namespace std' directive

class Solution {
public:
    int f(int n, vector<int> &dp) {
        if (n <= 1) {
            return 1;
        }
        if (dp[n] != -1) {
            return dp[n];
        }

        return dp[n] = f(n - 1, dp) + f(n - 2, dp);
    }

    int climbStairs(int n) {
        vector<int> dp(n+1, -1);

        int ans = f(n, dp);
        return ans;
    }
};

int main() {
    Solution solution;
    int n;
    cout << "Enter the number of stairs: ";
    cin >> n;
    int ways = solution.climbStairs(n);
    cout << "Number of distinct ways to climb " << n << " stairs: " << ways << endl;

    return 0;
}
