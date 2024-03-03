//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int totaldigit(int num){
        int count=0;
        while(num>0){
            num=num/10;
            count++;
        }
        return count;
    }
    
    bool isarmstrong(int num){
        int original=num;
        int digits=totaldigit(num);
        int sum=0;
        while(num>0){
            int digit=num%10;
            sum=sum+pow(digit,digits);
            num=num/10;
        }
        return original==sum;
    }
    string armstrongNumber(int n){
        if(isarmstrong(n)){
           return "Yes";
        }
        else{
            return "No";
        }
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
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends