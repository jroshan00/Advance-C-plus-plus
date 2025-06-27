/*
The results of an online computer certification examination have been released. 
The exam organizers have decided to give grades to the candidates. 
The grades will be allocated based on the range of marks obtained by the candidates. To accomplish this, 
the developers have been asked to develop an algorithm to find the missing ranges in the list of N marks, 
inclusive of the lower and the higher ranges provided. The algorithm will first sort the list and then find the missing ranges. 
Write the algorithm to find the missing ranges.

The first line of input consists of an integer- numMarks, representing the total number of candidates (N).
The next line consists of N space- separated integers- numMarks[0], numMarks[1]. numMarks[2]....
numMarks[N-1] representing the marks obtained by each candidate. The next line consists of an integer low, representing the minimum range.
The last line consists of an integer- high, representing the maximum range.

Input:
5
4 2 45 23 70
1
75

O/P
1
3

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<int, int>> find_missing_ranges(const vector<int>& marks, int low, int high) {
    vector<int> sortedMarks = marks;
    sort(sortedMarks.begin(), sortedMarks.end());
    for(int i=0; i<=sizeof(sortedMarks); i++){
        
    }
    vector<pair<int, int>> missingRanges;

    if (sortedMarks[0] > low) {
        missingRanges.push_back(make_pair(low, sortedMarks[0] - 1));
    }

    for (int i = 1; i < sortedMarks.size(); ++i) {
        if (sortedMarks[i] - sortedMarks[i - 1] > 1) {
            missingRanges.push_back(make_pair(sortedMarks[i - 1] + 1, sortedMarks[i] - 1));
        }
    }

    if (sortedMarks.back() < high) {
        missingRanges.push_back(make_pair(sortedMarks.back() + 1, high));
    }

    return missingRanges;
}

int main() {
    int numMarks;
    cin >> numMarks;

    vector<int> marks(numMarks);
    for (int i = 0; i < numMarks; ++i) {
        cin >> marks[i];
    }

    int low, high;
    cin >> low >> high;

    vector<pair<int, int>> missingRanges = find_missing_ranges(marks, low, high);

    for (const auto& range : missingRanges) {
        cout << range.first << " " << range.second << endl;
    }

    return 0;
}

// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// void findMissingRanges(int numMarks, vector<int>& marks, int lowerRange, int upperRange) {
//     vector<string> missingRanges;
//     marks.push_back(upperRange + 1);

//     int prevMark = lowerRange - 1;

//     for (int mark : marks) {
//         if (mark - prevMark > 1) {
//             if (prevMark + 1 == mark - 1) {
//                 missingRanges.push_back(to_string(prevMark + 1));
//             } else {
//                 missingRanges.push_back(to_string(prevMark + 1) + "->" + to_string(mark - 1));
//             }
//         }
//         prevMark = mark;
//     }

//     for (const string& range : missingRanges) {
//         cout << range << endl;
//     }
// }

// int main() {
//     int numMarks;
//     cin >> numMarks;

//     vector<int> marks(numMarks);
//     for (int i = 0; i < numMarks; ++i) {
//         cin >> marks[i];
//     }

//     int lowerRange = marks[0];
//     int upperRange = marks.back();

//     findMissingRanges(numMarks, marks, lowerRange, upperRange);

//     return 0;
// }