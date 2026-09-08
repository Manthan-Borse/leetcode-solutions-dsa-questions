/*
 * Problem: 1011. Capacity To Ship Packages Within D Days
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/submissions/2134509305/
 * Language: cpp
 * Date: 2026-09-08
 */

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
      int st=*std::max_element(weights.begin(), weights.end());
    int end = std::accumulate(weights.begin(), weights.end(), 0);
    int ans = -1;
    while (st<=end)
    {
        int mid = st + (end - st) / 2;
       
        
        if (reqdays(weights,mid) <= days) {
            ans = mid;
            end = mid - 1;
        } else {
            st = mid + 1;
        }
    }
    return ans;
    }
    int reqdays(const std::vector<int>& weights, int capacity) {
    int days = 1;
    int currentLoad = 0;
    for (int weight : weights) {
        if (currentLoad + weight > capacity) {
            days++;
            currentLoad = weight;
        } else {
            currentLoad += weight;
        }
    }
    return days;
}
};
