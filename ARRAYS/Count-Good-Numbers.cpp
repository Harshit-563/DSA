1class Solution {
2public:
3    long long mod = 1e9 + 7;
4
5    long long power(long long x, long long n) {
6        long long result = 1;
7        while (n > 0) {
8            if (n % 2 == 1) {
9                result = (result * x) % mod;
10            }
11            x = (x * x) % mod;
12            n /= 2;
13        }
14        return result;
15    }
16
17    int countGoodNumbers(long long n) {
18        long long even = (n + 1) / 2;
19        long long odd = n / 2;
20
21        long long ans = (power(5, even) * power(4, odd)) % mod;
22        return ans;
23    }
24};