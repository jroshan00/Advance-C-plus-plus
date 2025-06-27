/*
Given two sorted arrays, merge them to form a single, sorted array with all items in non-decreasing order.

Example

a-[1,2,3]

b-[2,5, 5]
Merge the arrays to create array cas follows:

a[0]< b[0] --->c= [a[0]] = [1] 
a[1]= b[0]--> c=[a[0], b[0]]

= [1, 2] a[1] < b[1] + c = [a[0], b[0], a[1]] = [1, 2, 2] a[2] b[1] c = [a[0], b[0], a[1], [2]]= [1, 2, 2, 3] No more elements in a + c = [a[0], b[e], a[1], a[2], b[1], b[2]] = [1, 2, 2, 3, 5, 5]

Elements were alternately taken from the arrays in the order given, maintaining precedence.

Function Description

Complete the function mergeArrays in the editor below.
mergeArrays has the following parameterts)                                                                                                       
 int a[n]: a sorted array of integers   ;                                                                                                                         
 int b[n]: a sorted array of integers;                                                                                                                                                       Returns

int[n]: an array of all the elements from both input arrays in non-decreasing order                                                            Constraints

•1<n<5×10
*/
#include <iostream>
#include <vector>

std::vector<int> mergeArrays(const std::vector<int>& a, const std::vector<int>& b) {
    int i = 0, j = 0;
    std::vector<int> c;

    while (i < a.size() && j < b.size()) {
        if (a[i] <= b[j]) {
            c.push_back(a[i]);
            i++;
        } else {
            c.push_back(b[j]);
            j++;
        }
    }

    while (i < a.size()) {
        c.push_back(a[i]);
        i++;
    }

    while (j < b.size()) {
        c.push_back(b[j]);
        j++;
    }

    return c;
}

int main() {
    std::vector<int> a = {2,4,5,9,9};
    std::vector<int> b = {0,1,2,3,4};
    std::vector<int> result = mergeArrays(a, b);

    // Output the merged array
    for (int num : result) {
        std::cout << num <<std::endl;
    }
    std::cout << std::endl;

    return 0;
}
