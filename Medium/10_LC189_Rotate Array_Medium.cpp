#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        
        // Handle cases where k is larger than the array size
        k = k % n;
        
        // If no rotation is needed, return early
        if (k == 0) return;
        
        // Step 1: Reverse the entire array
        reverse(nums.begin(), nums.end());
        
        // Step 2: Reverse the first k elements
        reverse(nums.begin(), nums.begin() + k);
        
        // Step 3: Reverse the remaining n - k elements
        reverse(nums.begin() + k, nums.end());
    }
};
