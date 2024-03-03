//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends


int findElement(int arr[], int n) {
    int leftMax = INT_MIN;
    int rightMin = INT_MAX;

    for (int i = 1; i < n - 1; i++) {
        leftMax = max(leftMax, arr[i - 1]);
        rightMin = min(rightMin, arr[i + 1]);

        if (arr[i] > leftMax && arr[i] < rightMin) {
            return arr[i];
        }
    }

    return -1;
    
}