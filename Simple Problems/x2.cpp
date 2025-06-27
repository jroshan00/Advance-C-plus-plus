/*
A report containing a stock's prices for the past n days is provided to a data analyst in the array stock Price]

The analyst is required to choose a subsequence of stock prices, called chosenDays in this explanation. The chosen subsequence of stock prices is balanced if the following condition holds:

• stockPrice[chosenDays[i]]-stockPrice[chosenDays[i 1]]=chosenDays[i]-chosenDays[i-1], for i>0.

The score of the chosen subsequence is the sum of stock prices on the chosen days. Find the maximum possible score that can be obtained by choosing an optimally balanced subsequence.

Note:

• A subsequence is an ordered subset of an array's elements in the same sequential ordering as in the original array.

• A subsequence of length 1 is always balanced.

Example

Consider n = 5, stockPrice = [1, 5, 3, 7, 8].                                                                                                               
Then, the subsequence [5, 7, 8) can be chosen.
Corresponding chosen days are [1, 3, 4]

(considering 0-based indexing). Now,  
stockPrice[3]-stockPrice[1]=7-5=2=3-1
stockPrice[4]-stockPrice[3]=8-7=1=4-3

Thus, the subsequence is balanced. Score = 5 +7+ 8-20, which is maximum possible. So, the answer is 20.

Function Description

Complete the function getMaximumScore in the editor below.

The function getMaximumScore has the following parameter:                                                                         
 int stockPrice[n]: the stock prices for the past n days
Returns:

long_int: the maximum possible score of an optimally chosen balanced subsequence

Constraints:

• 1≤ns≤100000

• 1 ≤ stockPrice[i] ≤1000000000
*/
#include <iostream>
#include <vector>

int countAnalogousArrays(std::vector<int>& consecutiveDifference, int lowerBound, int upperBound) {
    int n = consecutiveDifference.size();
    int count = 0;

    // Generate all possible analogous arrays
    for (int start = lowerBound; start <= upperBound; start++) {
        std::vector<int> array;
        array.push_back(start);
        bool valid = true;

        for (int i = 0; i < n; i++) {
            int next_element = array.back() + consecutiveDifference[i];
            if (next_element < lowerBound || next_element > upperBound) {
                valid = false;
                break;
            }
            array.push_back(next_element);
        }

        if (valid) {
            count++;
        }
    }

    return count;
}

int main() {
    std::vector<int> consecutiveDifference = {-1,-3,2};
    int lowerBound = 2;
    int upperBound = 8;
    int result = countAnalogousArrays(consecutiveDifference, lowerBound, upperBound);
    std::cout << result << std::endl;  // Output: 3

    return 0;
}
