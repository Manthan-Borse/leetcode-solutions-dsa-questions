/*
 * Problem: 33. Search in Rotated Sorted Array
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/search-in-rotated-sorted-array/submissions/2132208725/
 * Language: cpp
 * Date: 2026-09-05
 */

class Solution {
public:
    int search(vector<int>& nums, int target) {
     int st=0;
        int end= nums.size()-1;
        while(st<=end){
        int mid=st+(end-st)/2;
        if(target==nums[mid]){
            return mid;
        }
        if(nums[st]<=nums[mid]){
            if(nums[st]<=target && target<=nums[mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        else{
            if(nums[mid]<=target&& target<=nums[end]){
                st=mid+1;
            }
            else{
                    end=mid-1   ; 
                }

        }
    }
        return -1;
    
        
    }
};
