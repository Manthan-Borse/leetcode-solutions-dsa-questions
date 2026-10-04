/*
 * Problem: 567. Permutation in String
 * Difficulty: Medium
 * Link: https://leetcode.com/problems/permutation-in-string/submissions/2162555325/
 * Language: cpp
 * Date: 2026-10-04
 */

class Solution {
public:

    bool isPermutation(int freq[],int windfreq[]){
        for(int i=0;i<26;i++){
            if(freq[i]!=windfreq[i]){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        
    int freq[26]={0};
        for(int i=0;i<s1.length();i++)
        {
            freq[s1[i]-'a']++;
        }

    int windowSize=s1.length();

         for(int i=0;i<s2.length();i++){
            int windowidx=0;
            int indx=i;
            int windfreq[26]={0};
                while(windowidx<windowSize && indx<s2.length())
                {
                         windfreq[s2[indx]-'a']++;  
                         windowidx++;
                         indx++;
                }
         if(isPermutation(freq, windfreq))
             {
                std::cout<<"Permutation found!"<<std::endl;
                return true;
            
            }
            
    }
   return false; }
};
