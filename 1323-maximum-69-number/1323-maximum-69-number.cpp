class Solution {
public:
    int maximum69Number (int num) 
    {
        string str = to_string(num);
        int len = str.length();
        
        for(int i = 0; i < len; i++)
        {
            if(str[i] == '6')
            {
                str[i] = '9';
                break;
            }
        }
        int no = stoi(str);
        return no;
    }
};