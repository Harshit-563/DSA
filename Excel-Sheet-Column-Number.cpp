1class Solution {
2public:
3    int titleToNumber(string columnTitle) {
4        int n=columnTitle.length();
5        long long count=0;
6        
7        bool a=false;
8        for(int i=0;i<n;i++){
9                int cur=(columnTitle[i]-'A')+1;
10                count=26*count+cur;
11            }
12        
13        return count;
14    }
15};