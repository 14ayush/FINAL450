#include<iostream>
#include<vector>
using namespace std;

int solve(vector<int> arr)
{
    int s=0;
   // int n=sizeof(arr)/sizeof(int);
    int e=arr.size()-1;
    int mid=s+(e-s)/2;

    while(s<=e)
    {
        //if the array has only 1 element
        if(s==e)
        {
            return s;
        }
        //now checking the index of mid

        if(mid%2==0) //mid is at even index
        {
            //we know that at left side of array first element is at even index and second element is at odd index
            if(arr[mid]==arr[mid+1])
            {
                //search in right (me left me khada hu aur answer right me milega)
                s=mid+2;
            }
            else // answer left me hoga so rather than start from mid-1 we can check mid (ki kya pata mid he answer ho)
            {
                e=mid;
            }
        }
        //now if mid is not at even index then it is at odd
        else
        {
            //now searching at right subarray
            if(arr[mid]==arr[mid-1])
            {
                //search in left
                s=mid+1;
            }
            else 
            {
                e=mid-1;
            }
        }
        mid=s+(e-s)/2;
    
    }
    return -1;

}


int main()
{
    vector<int> arr{1,1,2,2,3,3,4,4,3,600,600,4,4};
    int ans=solve(arr);
    cout<<"The odd occuring element is "<<ans<<endl;
    cout<<"The odd occuring element is "<<arr[ans];

    return 0;
}