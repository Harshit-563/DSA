1class Solution {
2
3public:
4    double power(double x, long n) {
5        // Base case: anything raised to 0 is 1
6        if (n == 0) return 1.0;
7
8        // Base case: anything raised to 1 is itself
9        if (n == 1) return x;
10
11        // If 'n' is even
12        if (n % 2 == 0) {
13            // Recursive call: x * x, n / 2
14            return power(x * x, n / 2);
15        }
16        // If 'n' is odd
17        // Recursive call: x * power(x, n-1)
18        return x * power(x, n - 1);
19    }
20    double myPow(double x, int n) {
21    
22         int num = n;
23
24        // If n is negative
25        if (num < 0) {
26            // Calculate the power of -n and take reciprocal
27            return (1.0 / power(x, -1*1LL * num));
28        }
29        // If n is non-negative
30        return power(x, num);
31    }
32};