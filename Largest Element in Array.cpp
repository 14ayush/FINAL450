//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    
    {
        if(n==0)
        {
            return INT_MIN;
        }
        //initilize the first element as highest element
        int maxelement=arr[0];
        //using for loop to iterate the loop
        for(int i=0;i<n;i++){
            if(arr[i]>=maxelement){
                maxelement=arr[i];
            }
        }
        return maxelement;
        
    }
};


//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int>arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Solution ob;
        cout << ob.largest(arr, n) << "\n";
    }
    return 0;
}

// } Driver Code Ends