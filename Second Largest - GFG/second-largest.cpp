//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) 
	{
	    int i = 0; 
	    int first_max = arr[0];
	    int second_max = -1;
	    
	    if(n < 2)
	    {
	        return -1;
	    }
	    
	    for(i = 0; i < n; i++)
	    {
	        if(arr[i] > first_max)
	        {
	            second_max = first_max; 
                first_max = arr[i];
	        }
	        else if((arr[i] > second_max) && (arr[i] != first_max))
	        {
	            second_max = arr[i];
	        }
	    }
	    if(second_max >= first_max)
	    {
	        return -1;
	    }
	    else
	    {
	        return second_max;
	    }
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends