
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    
public:
    string calc_Sum(int *a,int n,int *b,int m){
    // Complete the function
    int carry=0;
    int i=n-1;
    int j=m-1;
    string ans;
    while(i>=0 && j>=0)
    {
        //case 1 when we have both the array of same size and length
        int x=a[i]+b[j]+carry;
        int digit=x%10;
        ans.push_back(digit+'0');//here we have answer as string and digit as integer so we add 0 to convert it into string
        carry=x/10;
        i--;
        j--;
        
    }
    while(i>=0)
    {
        //case 2 when we have a is bigger than b in size and length
        int x=a[i]+0+carry;
        int digit=x%10;
        ans.push_back(digit+'0');//here we have answer as string and digit as integer so we add 0 to convert it into string
        carry=x/10;
        i--;
        
    }
    while(j>=0)
    {
        //case 3 when we have b is larger than a in  length
        int x=0+b[j]+carry;
        int digit=x%10;
        ans.push_back(digit+'0');//here we have answer as string and digit as integer so we add 0 to convert it into string
        carry=x/10;
        
        j--;
    }
    //now if we have carry left
    if(carry)
    {
        ans.push_back(carry+'0');
    }
    //we got an error that if got 0's at the last of answer and when we going to reverse it then 0's came in starting that makes no sence so we pop them 
    while(ans[ans.size()-1]=='0')
    {
        ans.pop_back();
    }
    //now reversing the answer becoz we are iterating right to left
    reverse(ans.begin(),ans.end());
    return ans;
    }
};