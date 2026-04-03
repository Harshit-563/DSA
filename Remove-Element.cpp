1class Solution {
2public:
3    int removeElement(vector<int>& nums, int val) {
4        for(int i=0;i<nums.size();i++){
5            if(nums[i]==val){
6                nums.erase(nums.begin()+i);
7                i--;
8            }
9        }
10        return nums.size();
11    }
12};