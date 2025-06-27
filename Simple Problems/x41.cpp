/*

The NLP enthusiasts of Hackerland are working on a string transformation algorithm. In a single operation, a string s can be transformed into another string by removing a suffix of the string and adding the removed suffix in front of the remaining string. For example, the string "abcd" can be transformed to "cdab" by removing the suffix "cd" and adding it to the front of the remaining string "ab".

Given two strings src and target of lowercase English characters and an integer k, find the number of ways to transform the string src to the string target using the given algorithm in exactly k steps. Since the answer can be large, report it modulo 1000000000 +7.

Note: Two ways are considered different if the sequence of indices chosen for breaking the suffix is different at 1 or more steps for the two ways.

Example

src="abcd", target = "cdab", k = 2.

1. "abcd" can be transformed to "bcda" by selecting the suffix "bcd" and "bcda" can be transformed to "cdab" by selecting the suffix "cda"

2. "abcd" can be transformed to "dabc" by selecting the suffix "d" and "dabc" can be transformed to "cdab" by selecting the suffix " c"                                                                                                                   There are 2 ways to transform src to target in exactly k steps. Hence the answer is 2.

Function Description:
Complete the function getNumWays in the editor below.

getNumWays has the following parameter(s):                                                                                                    
string src: the source string                                                                                                                                         
string target: the target string
int k: the number of steps

Returns

int: the number of ways modulo 1000000000+7

Constraints

• 2≤length(src)≤ 1000

•2≤length(target)≤  1000

• 1≤k≤1000000                                                                                                                                                                                        Input Format for Custom Testing:

The first line contains a string s.
The second line contains a string t.
The third line contains an integer k.

*/
#include <iostream>
#include <vector>

const int MOD = 1000000007;

int getNumWays(std::string src, std::string target, int k) {
    int n = src.length();
    int m = target.length();

    // Initialize a 2D vector dp with zeros
    std::vector<std::vector<long long>> dp(n + 1, std::vector<long long>(m + 1, 0));

    // Base case: dp[i][0] = 1 for all i (transform to an empty target)
    for (int i = 0; i <= n; i++) {
        dp[i][0] = 1;
    }

    // Dynamic programming
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            dp[i][j] = dp[i - 1][j - 1];
            if (src[i - 1] != target[j - 1]) {
                dp[i][j] = (dp[i][j] + (dp[i - 1][j] * (i - 1)) % MOD) % MOD;
            }
        }
    }

    return dp[n][m];
}

int main() {
    std::string src = "abcd";
    std::string target = "cdab";
    int k = 2;
    int result = getNumWays(src, target, k);
    std::cout << result << std::endl; // Output: 2

    return 0;
}