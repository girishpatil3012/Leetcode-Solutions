//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string str) 
    { 
        int len = str.length();
        stack<string> s;
        
        for(int i = 0; i < len; i++)
        {
            string word = "";
            while(str[i] != '.' && i < len)
            {
                word += str[i];
                i++;
            }
            s.push(word);
        }
        string ans = "";
        while(!s.empty())
        {
            ans += s.top() + '.';
            s.pop();
        }
        ans.pop_back();
        
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends