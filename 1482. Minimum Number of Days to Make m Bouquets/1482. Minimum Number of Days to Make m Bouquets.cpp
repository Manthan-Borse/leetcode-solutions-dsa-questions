/*
 * Problem: 1482. Minimum Number of Days to Make m Bouquets
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/submissions/2133338170/
 * Language: cpp
 * Date: 2026-09-06
 */

class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
         int n = bloomDay.size();
         if (1LL * m * k > n)
          return -1;
   
    int low = *std::min_element(bloomDay.begin(), bloomDay.end());
    int high = *std::max_element(bloomDay.begin(), bloomDay.end());
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        int bouquets = 0, flowers = 0;

        for (int day : bloomDay) {
            if (day <= mid) {
                flowers++;
                if (flowers == k) {
                    bouquets++;
                    flowers = 0;
                }
            } else {
                flowers = 0; // Reset flower count if the flower hasn't bloomed
            }
        }

        if (bouquets >= m) {
            result = mid;
            high = mid - 1; // Try to find a smaller number of days
        } else {
            low = mid + 1; // Need more days
        }
    }
    return result;
    }
};
