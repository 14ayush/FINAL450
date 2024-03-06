class Solution {
public:
    vector<int> factorial(int N){
        // code here
        vector<int> ans;
        ans.push_back(1); //initially we push ans 1 bcoz factorial of 0 is 1
        int carry=0;
        for(int i=2;i<=N;i++)
        {
            for(int j=0;j<ans.size();j++)
            {
                //calculating the factorial
                int x=ans[j]*i+carry;
                ans[j]=x%10;
                carry=x/10;
            }
            //checking for carry if crry is multi digit the again we have to find its factorial then carry of carry no
            while(carry)
            {
                //carry=carry%10;//finding it modulo or extracting the last digit
                ans.push_back(carry%10);
                carry=carry/10;//finding the carry of carry
            }
        }
        //now reversing the answer
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends