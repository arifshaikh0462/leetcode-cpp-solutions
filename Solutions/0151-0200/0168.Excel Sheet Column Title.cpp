class Solution {
public:
    string convertToTitle(int columnNumber) {
        string result;
        while (columnNumber > 0) {
            columnNumber--;                           // shift to 0-based
            result.push_back('A' + columnNumber % 26); // current last letter
            columnNumber /= 26;                        // move to next position
        }
        reverse(result.begin(), result.end());
        return result;
    }
};