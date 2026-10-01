/*
 * Problem: 344. Reverse String
 * Difficulty: Easy
 * Link: https://leetcode.com/problems/reverse-string/submissions/2159644894/
 * Language: cpp
 * Date: 2026-10-01
 */

class Solution {
public:
    void reverseString(vector<char>& s) {
      
        int st=0;
        int end=s.size()-1;
        while(st<end){
            swap(s[st],s[end]);
            st++;
            end--;
        }
        
    }
    
};
