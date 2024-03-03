//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h> 
#include <vector> 
using namespace std; 

// } Driver Code Ends
class Solution
{
  public:
    vector<int> findIndex(int a[], int n, int key)
    {
        //code here.
        //making two elements   start and end  and initilize with -1 both bcoz 
        //if the pair didn't match we simply return the initilize value
        int start = -1;
        int end= -1;
        for(int i=0;i<n;i++){
            if(a[i]==key){
                if(start==-1){
                    start=i;
                }
                end=i;
            }
            
        }
        std::vector<int> result;
        result.push_back(start);
        result.push_back(end);
        return result;
        
    }
  
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        vector<int> res;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        res=ob.findIndex(arr, n, key);
        for (int i = 0; i < res.size(); i++) 
        cout << res[i] << " ";
        cout << "\n";
    }
    
    return 0;
}

// } Driver Code Ends