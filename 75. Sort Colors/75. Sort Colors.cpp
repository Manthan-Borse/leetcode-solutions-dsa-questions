/*
 * Problem: 75. Sort Colors
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/sort-colors/submissions/2144218428/
 * Language: cpp
 * Date: 2026-09-17
 */

class Solution {
public:
    void sortColors(vector<int>& a) {
         int low=0;int mid=0;
    int n=a.size();
    int high=n-1;
    while(mid<=high){
        if(a[mid]==0){
            std::swap(a[mid],a[low]);
            low++;
            mid++;
        }
        else if(a[mid]==1){
            mid++;
        }
        else{
            std::swap(a[mid],a[high]);
            high--;
        }
    }
        
    }
};
