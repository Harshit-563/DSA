1class Solution {
2public:
3    bool check(vector<int>& nums) {
4        int n=nums.size();
5        int c=0;
6        for(int i=0;i<n;i++){
7          if(nums[i]>nums[(i+1)%n]){
8            c++;
9            if(c>1) return false;
10          } 
11        }
12        
13        return true;
14        
15    }
16};