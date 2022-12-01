class Solution {
public:
    int compareVersion(string version1, string version2) 
    {
        int len1 = version1.length();
        int len2 = version2.length();
        int i = 0, j = 0, val1 = 0, val2 = 0, ret = 0;
        
        while(i < len1 || j < len2)
        {
            while(i < len1 && version1[i] != '.')
            {
                val1 = val1 * 10 + (version1[i]-'0');
                i++;
            }
            
            while(j < len2 && version2[j] != '.')
            {
                val2 = val2 * 10 + (version2[j]-'0');
                j++;
            }
            
            if(val1 > val2)
            {
                ret = 1;
                break;
            }
            else if(val1 < val2)
            {
                ret = -1;
                break;
            }
            val1 = 0, val2 = 0;
            i++,j++;
        }
        return ret;
    }
};