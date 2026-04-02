1class Solution {
2public:
3    string sortSentence(string s) {
4      stringstream ss(s);
5      string token;
6      vector<string> v;
7      while(ss >> token){
8        v.push_back(token);
9      } 
10      vector<string> a(v.size());
11      for(int i=0;i<v.size();i++){
12        int b= v[i][v[i].size()-1] - '0';
13        v[i].erase(v[i].begin()+v[i].size()-1);
14        a[b-1]=v[i];
15      } 
16      string res="";
17      for(int i=0;i<a.size();i++){
18        res+=a[i];
19        if(i!=a.size()-1) res+=" ";
20      }
21      return res;
22    }
23};