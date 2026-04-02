1class Solution {
2public:
3    int toMinutes(string t){
4        return stoi(t.substr(0,2)) * 60 + stoi(t.substr(3,2));
5    }
6    bool haveConflict(vector<string>& event1, vector<string>& event2) {
7    int start1 = toMinutes(event1[0]);
8        int end1   = toMinutes(event1[1]);
9
10        int start2 = toMinutes(event2[0]);
11        int end2   = toMinutes(event2[1]);
12
13        return (start1 <= end2 && start2 <= end1);
14    }
15};