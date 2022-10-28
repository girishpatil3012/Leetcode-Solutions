class Solution {
public:    
    vector<string> commonChars(vector<string>& words) 
    {
        int len1 = words.size();
        unordered_map<char,array<int,100>> mp;
        vector<string> vec;
        
        for(int i = 0; i < len1; i++)
        {
            int len2 = words[i].length();
            
            for(int j = 0; j < len2; j++)
            {
                mp[words[i][j]][i]++;
            }
        }
        
        int count = INT_MAX;
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            count = INT_MAX;
            for(int i = 0; i < len1; i++)
            {
                if(it->second[i] < count)
                {
                    count = it->second[i];
                }  
            }
            string str(1, it->first);
            for(int i = 0; i < count; i++)
            {
                vec.push_back(str);
            }
        }
        return vec;
    }
};