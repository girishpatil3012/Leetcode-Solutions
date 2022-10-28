class Solution {
public:
    int numUniqueEmails(vector<string>& emails) 
    {
        int len1 = emails.size();
        unordered_map<string,int> mp;
        
        for(int i = 0; i < len1; i++)
        {
            string temp = "";
            string present = emails[i];
            
            int len2 = emails[i].length();
            for(int j = 0; present[j] != '@'; j++)
            {
                if(present[j] == '.')
                {
                    continue;
                }
                if(present[j] == '+')
                {
                    break;  
                }
                temp.push_back(present[j]);
            }
            
            int index = present.find('@');
            
            while(index < len2)
            {
                temp.push_back(present[index++]);
            }
            
            mp[temp]++;
        }
        return mp.size();
    }
};