1class Solution {
2public:
3     void findCombination(int ind, int target, vector<int>& arr, vector<vector<int>>& ans, vector<int>& ds) {
4        // Base case: if we have considered all elements in the array
5        if (ind == arr.size()) {
6            // If the target is zero, we have found a valid combination
7            if (target == 0) {
8                ans.push_back(ds);  // Add the current combination to the result
9            }
10            return;
11        }
12
13        // Recursive case: pick the element if it's less than or equal to the target
14        if (arr[ind] <= target) {
15            ds.push_back(arr[ind]);  // Add the current element to the combination
16            findCombination(ind, target - arr[ind], arr, ans, ds);  // Continue with the same index to allow repeated elements
17            ds.pop_back();  // Backtrack by removing the last added element
18        }
19
20        // Skip the current element and move to the next index
21        findCombination(ind + 1, target, arr, ans, ds);
22    }
23
24    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
25        vector<vector<int>> ans;  // To store the result
26        vector<int> ds;  // To store a current combination
27        findCombination(0, target, candidates, ans, ds);  // Start the recursive search
28        return ans;  // Return all valid combinations
29    }
30};