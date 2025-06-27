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

// Function to calculate the power of a number (base^exponent) modulo MOD
long long power(long long base, int exponent) {
    long long result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        exponent /= 2;
    }
    return result;
}

// Function to calculate n choose r modulo MOD
long long nChooseR(int n, int r) {
    if (r == 0) {
        return 1;
    }

    std::vector<long long> factorial(n + 1, 1);
    for (int i = 2; i <= n; i++) {
        factorial[i] = (factorial[i - 1] * i) % MOD;
    }

    long long inverse_r = power(factorial[r], MOD - 2);
    long long inverse_n_r = power(factorial[n - r], MOD - 2);

    return (factorial[n] * inverse_r % MOD * inverse_n_r % MOD) % MOD;
}

int getNumWays(std::string src, std::string target, int k) {
    int m = src.size();
    int n = target.size();

    // Calculate the number of ways to rearrange the characters in src and target
    long long src_permutations = 1;
    long long target_permutations = 1;

    for (int i = 0; i < m; i++) {
        src_permutations = (src_permutations * (i + 1)) % MOD;
    }

    for (int i = 0; i < n; i++) {
        target_permutations = (target_permutations * (i + 1)) % MOD;
    }

    // Calculate the total number of ways to transform src into target in k steps
    long long total_ways = (src_permutations * power(target_permutations, k)) % MOD;

    // Calculate the number of invalid transformations
    long long invalid_ways = 0;
    for (int i = 0; i <= k; i++) {
        if ((k - i) % 2 == 0) {
            // The number of steps remaining to take from src to target is (k - i),
            // and it must be even for a valid transformation.
            long long valid_ways = (nChooseR(k, i) * power(n - 1, i)) % MOD;
            invalid_ways = (invalid_ways + valid_ways) % MOD;
        }
    }

    // Calculate the number of valid transformations
    long long valid_ways = (total_ways - invalid_ways + MOD) % MOD;

    return valid_ways;
}

int main() {
    std::string src, target;
    int k;
    std::cin >> src >> target >> k;

    int result = getNumWays(src, target, k);
    std::cout << result << std::endl;

    return 0;
}
