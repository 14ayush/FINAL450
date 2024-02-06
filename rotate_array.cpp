//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // code here
        //by using temp array
        //creating the temp array
        //using modulo operation 
        d=d%n;
        if(d>=n){
            return;
        }
        int temp[d];
        //now copy the elements to temp array
        for (int i=0;i<d;i++){
            temp[i]=arr[i];
        }
        //now shift the remaining elements to left 'd' position
        for(int i=d;i<n;i++){
            arr[i-d]=arr[i];
        }
        //copy the elements to the original array
        for(int i=0;i<d;i++){
            arr[n-d+i]=temp[i];
        }
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    Solution ob;
	    //calling rotateArr() function
	    ob.rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}
// } Driver Code Ends