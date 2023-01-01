//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int convertFive(int n);

// Driver program to test above function
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << convertFive(n) << endl;
    }
}
// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n) 
{
    string str = to_string(n);
    
    int len = str.length();
    for(int i = 0; i < len; ++i)
    {
        if(str[i] == '0')
        {
            str[i] = '5';
        }
    }
    
    int num = stoi(str);
    
    return num;
}