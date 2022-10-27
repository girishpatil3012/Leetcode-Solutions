//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int catchThieves(char arr[], int n, int k) 
    {
        vector<int> arr1;
        vector<int> arr2;

        for(int i=0;i<n;i++)
        {
            if(arr[i]=='T')
            {
                arr1.push_back(i);
            }
            else
            {
                arr2.push_back(i);
            }
        }

        int i = 0, j = 0, ans = 0;
        int len1 = arr1.size();
        int len2 = arr2.size();
        
        while(i<len1 && j<len2)

        {
            if(abs(arr1[i]-arr2[j])<=k)
            {
                ans++;
                i++;
                j++;
            }
            else if(arr1[i]>arr2[j])
            {
                j++;
            }
            else
            {
                i++;
            }
        }
        return ans;
    }
    
};

//{ Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n >> k;
		char arr[n];
		for (int i = 0; i < n; ++i)
			cin>>arr[i];
		Solution obj;
		cout<<obj.catchThieves(arr, n, k) << endl;
	}
	return 0; 
} 


// } Driver Code Ends