/*
 * Problem: 875. Koko Eating Bananas
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/koko-eating-bananas/submissions/2133334972/
 * Language: cpp
 * Date: 2026-09-06
 */

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
       
    int low = 1;
    int high = *std::max_element(piles.begin(), piles.end());
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        long long totalHours = 0;
        for (int pile : piles) {
            totalHours += std::ceil((double)pile / mid);
        }
        if (totalHours <= h) {
            result = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return result;

        
    }
};
