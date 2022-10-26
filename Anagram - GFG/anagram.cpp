//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b)
    {
        vector<int> freq1(26,0);
        vector<int> freq2(26,0);
        int len1 = a.length(), len2 = b.length(), i = 0;
        
        if(len1 != len2)
        {
            return false;
        }
        
        for(i = 0; i < len1; i++)
        {
            freq1[a[i] - 'a']++;
            freq2[b[i] - 'a']++;
        }
        
        for(i = 0; i < 26; i++)
        {
            if(freq1[i] != freq2[i])
            {
                break;
            }
        }
        if(i == 26)
        {
            return true;
        }
        return false;
    }

};

//{ Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}

// } Driver Code Ends