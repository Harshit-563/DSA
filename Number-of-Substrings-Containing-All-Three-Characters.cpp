1class Solution {
2public:
3    int numberOfSubstrings(string s) {
4        int last_a = -1, last_b = -1, last_c = -1;
5        int count = 0;
6
7        for (int i = 0; i < s.size(); i++) {
8            if (s[i] == 'a') last_a = i;
9            if (s[i] == 'b') last_b = i;
10            if (s[i] == 'c') last_c = i;
11
12            int minIndex = min({last_a, last_b, last_c});
13
14            if (minIndex != -1) {
15                count += (minIndex + 1);
16            }
17        }
18
19        return count;
20    }
21};