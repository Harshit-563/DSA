1class Solution {
2public:
3    bool checkString(string s) {
4        bool a=false;
5        for( char c:s){
6            if(c=='b'){
7                a=true;
8            }
9            if(c=='a'&& a) return false;
10        }
11        return true;
12    }
13};