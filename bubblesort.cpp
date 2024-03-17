#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr{10,1,7,6,5,4,9};
    int n=arr.size();

    for(int i=0;i<n-1;i++) //here we use n-1 bcoz we consider the last element is sorted  
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }

    }
    //printing the sorted array
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}