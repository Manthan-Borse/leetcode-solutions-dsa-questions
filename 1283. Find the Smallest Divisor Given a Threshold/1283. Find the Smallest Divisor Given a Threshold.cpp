/*
 * Problem: 1283. Find the Smallest Divisor Given a Threshold
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/find-the-smallest-divisor-given-a-threshold/submissions/2134477423/
 * Language: cpp
 * Date: 2026-09-08
 */

class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
      int st =1;
    int end = *max_element(nums.begin(), nums.end());
    int ans = -1;
    while(st <= end) {
        int mid=st + (end - st) / 2;
        long long sum = 0;
        for(int val : nums) {
            sum += (val + mid - 1) / mid; 
        }
        if(sum <= threshold) {
            ans = mid;
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }
    return ans;   
    }
};
