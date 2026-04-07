1class Solution {
2public:
3    int maxSubArray(vector<int>& nums) {
4        int a=nums[0];
5        int b=nums[0];
6        for(int i=1;i<nums.size();i++){
7            a=max(nums[i],nums[i]+a);
8            b=max(a,b);
9        }
10        return b;
11    }
12};