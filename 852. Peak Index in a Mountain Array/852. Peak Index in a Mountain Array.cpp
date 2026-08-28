/*
 * Problem: 852. Peak Index in a Mountain Array
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/peak-index-in-a-mountain-array/submissions/2123088181/
 * Language: cpp
 * Date: 2026-08-28
 */

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st=1,end=arr.size()-2;
        
         while(st<=end){
             int mid=st+(end-st)/2;
             
             if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1]){
                return mid;
              }else if(arr[mid]>arr[mid+1]){
                         end=mid-1;
                 }else{
                      st=mid+1;
        }
    }
  return -1;
    }
};
