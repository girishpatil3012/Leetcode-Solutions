class Solution {
public:
    string intToRoman(int num) 
    {
        string str = "";
        
        vector<vector<string>> arr = {{"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII","IX"},{"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},{"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},{"", "M", "MM", "MMM"}};
        int count = 0;
        while(num > 0)
        {
            int digit = num % 10;
            str = arr[count][digit] + str;
            count++;
            num /= 10;
        }
        return str;
    }
};