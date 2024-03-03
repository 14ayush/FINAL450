//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    //checkinh that the array has less than 2 element or not
	    if(n<2){
	        return -1;
	    }
	    int largest=INT_MIN;
	    int secondlargest=INT_MIN;
	    // iterate to find the largest element
	    for(int i=0;i<n;i++){
	        if(arr[i]>largest){
	            largest=arr[i];
	        }
	    }
	    //iterate to find the second largest element using for loop
	    for(int i=0;i<n;i++){
	        if(arr[i]>secondlargest && arr[i] !=largest){
	            secondlargest=arr[i];
	        }
	    }
	    //checking if no second largest found
	    if(secondlargest==INT_MIN){
	        return -1;
	    }
	    return secondlargest;
	    // code here
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