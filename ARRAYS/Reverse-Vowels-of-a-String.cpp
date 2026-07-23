1class Solution {
2public:
3    bool isVowel(char c){
4        c = tolower(c);
5        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
6    }
7    string reverseVowels(string s) {
8       int l=0;
9       int r=s.length()-1;
10        while(l < r){
11            while(l < r && !isVowel(s[l])) l++;
12            while(l < r && !isVowel(s[r])) r--;
13
14            swap(s[l], s[r]);
15            l++;
16            r--;
17        }
18
19        return s;
20    }
21};