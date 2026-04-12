1class Solution {
2public:
3    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
4        sort(candidates.begin(), candidates.end());
5        vector < vector < int >> ans;
6        vector < int > ds;
7        findCombination(0, target, candidates, ans, ds);
8        return ans;
9    }
10    void findCombination(int ind, int target, vector < int > & arr, vector < vector < int >> & ans, vector < int > & ds) {
11        if (target == 0) {
12            ans.push_back(ds);
13            return;
14        }
15        for (int i = ind; i < arr.size(); i++) {
16            if (i > ind && arr[i] == arr[i - 1]) continue;
17            if (arr[i] > target) break;
18            ds.push_back(arr[i]);
19            findCombination(i + 1, target - arr[i], arr, ans, ds);
20            ds.pop_back();
21        }
22    }
23};