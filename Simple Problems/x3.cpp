#include <iostream>
#include <vector>

long long getMaximumScore(std::vector<int>& stockPrice) {
    int n = stockPrice.size();
    
    // Initialize an array to store the maximum score for each index
    std::vector<long long> max_score(n, 0);
    
    // Calculate the maximum score for each index
    for (int i = 0; i < n; i++) {
        max_score[i] = stockPrice[i]; // Initialize with the stock price itself
        
        // Check if we can include any previous elements while maintaining balance
        for (int j = i - 1; j >= 0; j--) {
            if (stockPrice[i] - stockPrice[j] == i - j) {
                max_score[i] = std::max(max_score[i], max_score[j] + stockPrice[i]);
            }
        }
    }
    
    // Find and return the maximum score from the entire array
    long long max_result = 0;
    for (int i = 0; i < n; i++) {
        max_result = std::max(max_result, max_score[i]);
    }
    
    return max_result;
}

int main() {
    std::vector<int> stockPrice = {3,2,1};
    long long result = getMaximumScore(stockPrice);
    std::cout << result << std::endl; // Output: 20

    return 0;
}
