class Solution {
public:
    bool squareIsWhite(string s) 
    {
        bool flag = false;
        
        if(s[0] == 'a')
        {
            if((s[1]-'0') % 2 == 0)
            {
                flag = true;
            }
        }
        else if(s[0] == 'b')
        {
            if((s[1]-'0') % 2 != 0)
            {
                flag = true;
            }
        }
        else if(s[0] == 'c')
        {
            if((s[1]-'0') % 2 == 0)
            {
                flag = true;
            }
        }
        else if(s[0] == 'd')
        {
            if((s[1]-'0') % 2 != 0)
            {
                flag = true;
            }
        }
        else if(s[0] == 'e')
        {
            if((s[1]-'0') % 2 == 0)
            {
                flag = true;
            }
        }
        else if(s[0] == 'f')
        {
            if((s[1]-'0') % 2 != 0)
            {
                flag = true;
            }
        }
        else if(s[0] == 'g')
        {
            if((s[1]-'0') % 2 == 0)
            {
                flag = true;
            }
        }
        else if(s[0] == 'h')
        {
            if((s[1]-'0') % 2 != 0)
            {
                flag = true;
            }
        }
        return flag;
    }
};