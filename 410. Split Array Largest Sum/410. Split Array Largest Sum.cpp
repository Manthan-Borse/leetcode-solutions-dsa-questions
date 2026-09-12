/*
 * Problem: 410. Split Array Largest Sum
 * Difficulty: Hard
 * Link: https://leetcode.com/problems/split-array-largest-sum/submissions/2139378119/
 * Language: cpp
 * Date: 2026-09-12
 */

class Solution {
public:

int count_subarry(std::vector<int>& arr,int mid){
    int count=1;
    int sum=0;
    for(int i=0;i<arr.size();i++){
        if(sum+arr[i]<=mid){
            sum+=arr[i];
        }else{
            count++;
            sum=arr[i];
        }
    }
    return count;
}

int splitArray(std::vector<int>& arr,int k){
    int n = arr.size();
    int st= std::max_element(arr.begin(),arr.end())[0];
    int end = std::accumulate(arr.begin(),arr.end(),0);
    while(st<end){
        int mid = st+(end-st)/2;
        int NUMof_array_count= count_subarry(arr,mid);
        if(NUMof_array_count>k){
            st=mid+1;}
            else{
                end=mid;
            }
        
    }
    return st;
}
   
};
