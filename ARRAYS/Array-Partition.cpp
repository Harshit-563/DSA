1class Solution {
2public:
3    int arrayPairSum(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5        long long count=0;
6        int n=nums.size();
7        for(int i=n-1;i>=1;i=i-2){
8            count+=min(nums[i],nums[i-1]);
9
10        }
11        return count;
12    }
13};