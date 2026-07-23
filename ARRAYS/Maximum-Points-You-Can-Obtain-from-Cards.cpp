1class Solution {
2public:
3    int maxScore(vector<int>& cardPoints, int k) {
4        int n = cardPoints.size();
5        int total = 0;
6
7        for (int x : cardPoints) total += x;
8
9        int windowSize = n - k;
10
11        if (windowSize == 0) return total;
12
13        int curr = 0;
14        for (int i = 0; i < windowSize; i++) {
15            curr += cardPoints[i];
16        }
17
18        int minSum = curr;
19
20        for (int i = windowSize; i < n; i++) {
21            curr += cardPoints[i];
22            curr -= cardPoints[i - windowSize];
23            minSum = min(minSum, curr);
24        }
25
26        return total - minSum;
27    }
28};