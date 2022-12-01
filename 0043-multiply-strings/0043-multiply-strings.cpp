class Solution {
public:
    string multiply(string num1, string num2) 
    {
        if(num1 == "0" || num2 == "0")
        {
            return "0";
        }
        int len1 = num1.length();
        int len2 = num2.length();
        vector<int> vec(len1+len2, 0);
        
        for(int i = len1-1; i >= 0; i--)
        {
            for(int j = len2-1; j >= 0; j--)
            {
                vec[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
                vec[i + j] += vec[i + j + 1] / 10;
                vec[i + j + 1] %= 10;
            }
        }
        
        int i = 0, len3 = vec.size();
        while(i < len3 && vec[i] == 0)
        {
            i++;
        }
        string str = "";
        while(i < len3)
        {
            str.push_back(vec[i] + '0');
            i++;
        }
        return str;
    }
};