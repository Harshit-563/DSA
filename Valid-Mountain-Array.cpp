1class Solution {
2public:
3    bool validMountainArray(vector<int>& arr) {
4        int n = arr.size();
5        int i = 0;
6
7        // go up
8        while(i + 1 < n && arr[i] < arr[i + 1]){
9            i++;
10        }
11
12        // peak cannot be first or last
13        if(i == 0 || i == n - 1) return false;
14
15        // go down
16        while(i + 1 < n && arr[i] > arr[i + 1]){
17            i++;
18        }
19
20        return i == n - 1;
21    }
22};