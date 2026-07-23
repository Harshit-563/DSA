1#include <bits/stdc++.h>
2using namespace std;
3
4class Solution {
5public:
6    bool areNumbersAscending(string s) {
7        stringstream ss(s);
8        string token;
9
10        vector<string> v;
11
12        // tokenize
13        while(ss >> token){
14            v.push_back(token);
15        }
16
17        vector<int> b;
18
19        // extract numbers
20        for(int i = 0; i < v.size(); i++){
21            if(isdigit(v[i][0])){
22                int a = stoi(v[i]);   // ✅ fix
23                b.push_back(a);
24            }
25        }
26
27        // check ascending
28        for(int i = 0; i < b.size() - 1; i++){
29            if(b[i] >= b[i + 1]) return false;  // ✅ fix
30        }
31
32        return true;
33    }
34};