/*
 * Problem: 31. Next Permutation
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/next-permutation/submissions/2146188001/
 * Language: cpp
 * Date: 2026-09-19
 */

class Solution {
public:
    void nextPermutation(vector<int>& a) {
         int n=a.size();
    int pivot=-1;
    for(int i=n-1;i>0;i--){
        if(a[i-1]<a[i]){
           pivot=i-1;
            break;
        }
    }
    if(pivot==-1){
        std::reverse(a.begin(),a.end());
        return;
    }
    int j=-1;
    for(int i=n-1;i>pivot;i--){
        if(a[i]>a[pivot]){
            j=i;
            break;
        }
    }
    std::swap(a[pivot],a[j]);
    std::reverse(a.begin()+pivot+1,a.end());
}    
    
};
