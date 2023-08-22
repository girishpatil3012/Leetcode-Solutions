class Solution {
public:
    string convertToTitle(int columnNumber)
    {
        string result;
        while (columnNumber)
        {
            columnNumber--;
            result.push_back(columnNumber%26 + 'A');
            columnNumber /= 26;
        }

        reverse(begin(result), end(result));
        return result;
    }
};