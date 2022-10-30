class Solution {
public:
    bool isLongPressedName(string name, string typed) 
    {
        int len1 = name.length(), len2 = typed.length();
        int i = 0, j = 0;
        bool flag = true;
        
        while(i < len1 || j < len2)
        {
            char ch = name[i];
            if(name[i] != typed[j])
            {
                flag = false;
                break;
            }
            i++;
            j++;
            if(name[i] != typed[j])
            {
                while(ch == typed[j])
                {
                    j++;
                } 
            }
        }
        return flag;
    }
};