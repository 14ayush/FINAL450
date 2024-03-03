#include<iostream>
#include<vector>
using namespace std;

//making function
int pivotele(vector<int> arr)
{
    //using binary search

    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;

    while(s<=e)
    {
        //handel the conditions where the sorting get fail
        if(arr[mid]>arr[mid+1])
        {
            return mid;
        }
        else if(arr[mid]<arr[mid-1])
        {
            return mid-1;
        }
        else if(arr[mid]<arr[mid-1])
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return mid;
}

int main()
{
    vector<int> v{3,4,5,1,2};
    int ans=pivotele(v);
    cout<<"index of pivot element is   "<<ans;
    return ans;

}