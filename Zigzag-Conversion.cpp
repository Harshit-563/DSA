1class Solution {
2public:
3    string convert(string s, int numRows) {
4        if (numRows == 1) return s;
5        vector<string> v(numRows);
6        bool a=true;
7        int row = 0;
8        int n=s.length();
9        for(char c:s){
10
11            v[row]+=c;
12            if(a){
13                if(row==numRows-1){
14                    a=false;
15                    row--;
16                }
17                else row++;
18                
19            }
20            else{
21                if(row==0){
22                    a=true;
23                    row++;
24                }
25                else row--;
26            }
27
28        }
29        string re;
30        for(int i=0;i<numRows;i++){
31            re+=v[i];
32        }
33        return re;
34    }
35};