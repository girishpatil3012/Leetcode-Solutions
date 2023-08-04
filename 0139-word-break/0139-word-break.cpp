class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        //BFS=> Queue + Visited[]
        //TC-> O(n^2) SC -> O(n)
        unordered_set<int> vis;
        queue<int> q;
        q.push(0);

        while(!q.empty())
        {
            int start = q.front();
            q.pop();
            if(vis.find(start) == vis.end())
            {
                vis.insert(start);
                for(int i = start; i < s.length(); i++)//For getting strings from s
                {
                    string word = s.substr(start, i - start + 1);
                    //When we find the word in wordDict we just insert the next of s index in queue
                    for (const string& str : wordDict)//For getting strings from wordDict
                    { 
                        if (str == word) {
                            q.push(i+1);
                            //if here i reaches to the end of s means it find all words
                            if(i + 1 == s.length()){ 
                                return true;
                            }
                        }
                    }
                }
            }
        }
        return false;
    }
};