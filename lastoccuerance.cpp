#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//function
int lastocc(vector<int> v,int key)
{
    int target=key;
    int s=0;
    int e=v.size()-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e)
    {
        if(v[mid]==target)
        {
            //same as first occurence but here we have to search in right
            ans=mid;
            s=mid+1;
        }
        else if(target<v[mid])
        {
            e=mid-1;
        }
        else 
        {
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    vector<int> v{1,2,3,3,3,4,4,4,4,9,10};
    //int size=v.size()-1;
    int key=3;
    int ans=lastocc(v,key);
    cout<<"last occ index is"<<ans;
    return 0;

}