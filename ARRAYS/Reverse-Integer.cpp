1class Solution {
2public:
3    int reverse(int x) {
4        bool a=false;
5        int b=pow(2,31)-1;
6       
7        if(x<0){
8            a=true;
9            if(x==-pow(2,31)) return 0;
10            else x=x*(-1);
11        }
12         
13        long long rev=0;
14        while(x>0){
15            int d=x%10;
16            rev=rev*10+d;
17            x=x/10;
18            
19        }
20        if(rev<b*(-1) || rev>b-1) return 0;
21        else if(a) return rev*(-1);
22        else return rev;
23    }
24};