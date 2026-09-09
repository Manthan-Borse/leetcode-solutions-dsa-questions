/*
 * Problem: 1539. Kth Missing Positive Number
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/kth-missing-positive-number/submissions/2136611072/
 * Language: cpp
 * Date: 2026-09-09
 */

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int st=0;
        int n= arr.size();
        int end = n-1;
        if(n==0){
            return k;
        }
        while(st<=end){
           int  mid=st+(end-st)/2;
           int  missing=arr[mid]-(mid+1);
            if(missing<k){
                st=mid+1;

            }else{
                end=mid-1;
            }
           
        } 
         return st+k;
    }
  
};
