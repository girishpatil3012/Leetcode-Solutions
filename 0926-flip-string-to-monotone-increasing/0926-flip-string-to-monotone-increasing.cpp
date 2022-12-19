class Solution {
public:
    int minFlipsMonoIncr(string s) 
    {
        int len = s.length();
        int counter = 0, flips = 0;
        
        for(int i = 0; i < len; ++i)
        {
            if(s[i] == '0')
            {
                flips++;
            }
            else
            {
                counter++;
            }
            
            flips = min(flips, counter);
        }
        return flips;
    }
};