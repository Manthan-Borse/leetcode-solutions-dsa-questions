/*
 * Problem: 162. Find Peak Element
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/find-peak-element/submissions/2131204603/
 * Language: cpp
 * Date: 2026-09-05
 */

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int st=1;
        int n=nums.size();
        int end = n-2;
            if(n==1){return 0;}
            if(nums[0]>nums[1]){ return 0;}
            if(nums[n-1]>nums[n-2]){return n-1;}
        while(st<=end){
            int mid=st+(end-st)/2;

            
            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){return mid;}
            if(nums[mid]>nums[mid-1]){
                st=mid+1;
            }
            if(nums[mid]<nums[mid-1]){
                end=mid-1;
            }

        }
        return -1;

        
    }
};
