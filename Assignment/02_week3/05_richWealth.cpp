#include <iostream>
#include <vector>

using namespace std; // Add this line to use the std namespace

int maximumWealth(vector<vector<int>>& accounts) {
    int count = 0;
    for(int i = 0; i < accounts.size(); i++) {
        int sum = 0;
        for(int j = 0; j < accounts[i].size(); j++) {
            sum += accounts[i][j];
        }
        if(sum > count) {
            count = sum;
        }
    }
    return count;
}

int main() {
    // Example usage of maximumWealth
    vector<vector<int>> accounts = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int max_wealth = maximumWealth(accounts);

    cout << "Maximum wealth among customers: " << max_wealth << endl;

    return 0;
}
