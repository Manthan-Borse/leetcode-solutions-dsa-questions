/*
 * Problem: 367. Valid Perfect Square
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/valid-perfect-square/submissions/2132221822/
 * Language: cpp
 * Date: 2026-09-06
 */

class Solution {
public:
    bool isPerfectSquare(int num) {
         int st=0;
         int end=num;
        
        while(st<=end){
        int mid=st+(end-st)/2;
        long long square=1LL*mid*mid;
        if(square==num){
            return true;
        }
        if(square<num){
            
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return false;
}
        
    
};
