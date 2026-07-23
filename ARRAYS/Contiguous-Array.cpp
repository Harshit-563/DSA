1class Solution {
2public:
3    int findMaxLength(vector<int>& nums) {
4        unordered_map<int, int> mp;
5        int sum = 0;
6        int maxLen = 0;
7
8        mp[0] = -1; // important
9
10        for(int i = 0; i < nums.size(); i++){
11            if(nums[i] == 0) sum -= 1;
12            else sum += 1;
13
14            if(mp.find(sum) != mp.end()){
15                maxLen = max(maxLen, i - mp[sum]);
16            } else {
17                mp[sum] = i;
18            }
19        }
20
21        return maxLen;
22    }
23};