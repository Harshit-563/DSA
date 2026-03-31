1class Solution {
2public:
3    long long atMost(vector<int>& nums, int goal) {
4        if (goal < 0) return 0;   
5
6        long long count = 0;      
7        int cur = 0;
8        int k = 0;
9
10        for (int i = 0; i < nums.size(); i++) {
11            cur += nums[i];
12
13            while (cur > goal) {
14                cur -= nums[k];
15                k++;
16            }
17
18            count += (i - k + 1);
19        }
20
21        return count;
22    }
23
24    int numSubarraysWithSum(vector<int>& nums, int goal) {
25        return (int)(atMost(nums, goal) - atMost(nums, goal - 1));
26    }
27};