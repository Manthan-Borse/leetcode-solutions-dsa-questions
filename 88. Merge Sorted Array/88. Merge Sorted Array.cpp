/*
 * Problem: 88. Merge Sorted Array
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/merge-sorted-array/submissions/2145237862/
 * Language: cpp
 * Date: 2026-09-18
 */

class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        int M=m+n;
        int i=m-1;
        int j=n-1;
        int indx=M-1;
        while(i>=0 && j>=0){
            if(a[i]>b[j]){
                a[indx]=a[i];
                i--;
                indx--;
            }
            else{
                a[indx]=b[j];
                j--;
                indx--;
            }
            
        }
        while(j>=0){
            a[indx]=b[j];
            j--;
            indx--;
        }
        
     }
 };
