#include<iostream>
#include<vector>
using namespace std;
//making the function
int nearlysort(vector<int> v,int target)
{
    int s=0;
    int e=v.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        //applying condition for nearly sorted array
        if(v[mid]==target)
        {
            return mid;

        }
        if (v[mid-1]==target)
        {
            return mid-1;
        }
        if(v[mid+1]==target)
        {
            return mid+1;
        }
        //now applying condition for binary search
        if(v[mid]<target)
        {
            //search in right
            s=mid+2;
        }
        else 
        {
            e=mid-2;
        }
        //update mid
        mid=s+(e-s)/2;

    }
    return -1;
}
int main()
{
    vector<int> v{10,3,40,20,50,80,70};
    int target;
    cout<<"Enter the target value"<<endl;
    cin>>target;
    int ans=nearlysort(v,target);
    cout<<"location of index is "<<ans<<endl;
    return 0;
}