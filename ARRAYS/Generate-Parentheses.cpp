1class Solution {
2public:
3    bool isValid(string s) {
4    int balance = 0;
5    for (char c : s) {
6        if (c == '(') balance++;
7        else balance--;
8        if (balance < 0) return false;
9    }
10    return balance == 0;
11}
12
13void generateAll(string curr, int n, vector<string>& res) {
14    if (curr.length() == 2 * n) {
15        if (isValid(curr)) res.push_back(curr);
16        return;
17    }
18    generateAll(curr + '(', n, res);
19    generateAll(curr + ')', n, res);
20}
21
22vector<string> generateParenthesis(int n) {
23    vector<string> res;
24    generateAll("", n, res);
25    return res;
26}
27   
28};