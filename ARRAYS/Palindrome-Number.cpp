1class Solution {
2public:
3    bool isPalindrome(int x) {
4        // Handle edge cases:
5        // 1. Negative numbers are not palindromes.
6        // 2. Numbers ending in 0 (except for 0 itself) are not palindromes.
7        if (x < 0 || (x % 10 == 0 && x != 0)) {
8            return false;
9        }
10
11        int revertedNumber = 0;
12        while (x > revertedNumber) {
13            revertedNumber = revertedNumber * 10 + x % 10;
14            x /= 10;
15        }
16
17        // When the loop finishes, x will either be equal to revertedNumber
18        // (for even number of digits) or x will be equal to revertedNumber / 10
19        // (for odd number of digits, where revertedNumber has the middle digit).
20        return x == revertedNumber || x == revertedNumber / 10;
21    }
22};