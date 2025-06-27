/*
Some items are stored in a warehouse. These items are either electronic or non-electronic.
The electronic items are denoted by vowels from the English alphabet i.e. a, e, i, o, u, 
and the non-electronic items are denoted by 
consonants from the English alphabet.
The warehouse manager wants to build an application for transferring the goods from the warehouse to the sellers. 
The application stores all their inventory in the form of a string.
Each character of the string denotes a single iter of the Inventory. 
The items in the warehouse are stored on a first come first serve basis. 
The items that go to sellers also follow this pattern. 
The warehouse sells the items to the sellers in a batch of size K.
The warehouse manager wants to know the maximum number of electronic items present in each batch


Question : Write an algorithm for an application to help the manager find 
total electronics devices of that batch in which the maximum number of electronics devices are present.

Input Format: 
The first line of input consists of a string-item, representing the letter of the items (electronic/non- electronic).
The second line consists of an integer - wink, representing the batch(K) that must be sold.


Input:
qwrtyueiws
4

Output:
 3
*/

#include <iostream>
#include <string>

using namespace std;

int find_total_electronics_in_max_batch(const string& inventory, int K) {
    int max_electronic_count = 0;
    int max_electronic_batch_index = 0;

    for (int start = 0; start <= inventory.size() - K; ++start) {
        int end = start + K - 1;
        int current_batch_electronic_count = 0;
        for (int i = start; i <= end; ++i) {
            if (inventory[i] == 'a' || inventory[i] == 'e' || inventory[i] == 'i' || inventory[i] == 'o' || inventory[i] == 'u') {
                current_batch_electronic_count++;
            }
        }

        if (current_batch_electronic_count > max_electronic_count) {
            max_electronic_count = current_batch_electronic_count;
            max_electronic_batch_index = start;
        }
    }

    int total_electronic_in_max_batch = 0;
    for (int i = max_electronic_batch_index; i < max_electronic_batch_index + K; ++i) {
        if (inventory[i] == 'a' || inventory[i] == 'e' || inventory[i] == 'i' || inventory[i] == 'o' || inventory[i] == 'u') {
            total_electronic_in_max_batch++;
        }
    }

    return total_electronic_in_max_batch;
}

int main() {
    string inventory;
    int K;

    // Input the inventory string
    cin >> inventory;

    // Input the batch size
    cin >> K;

    int result = find_total_electronics_in_max_batch(inventory, K);
    cout << "Total electronic devices in batch with max count: " << result << endl;

    return 0;
}
