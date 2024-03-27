<<<<<<< HEAD
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr{5,4,2,1,7,6};
    int n=arr.size();
    for(int i=0;i<n-1;i++)
    {
        int minimumindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minimumindex])
            {
                minimumindex=j;
            }
        }
        swap(arr[i],arr[minimumindex]);
    }
    //print the array
    for(int i=0;i<n;i++)
    {
        cout<<"sorted array is "<<arr[i]<<"   "<<endl;
    }
    return 0;
=======
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr{5,4,2,1,7,6};
    int n=arr.size();
    for(int i=0;i<n-1;i++)
    {
        int minimumindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minimumindex])
            {
                minimumindex=j;
            }
        }
        swap(arr[i],arr[minimumindex]);
    }
    //print the array
    for(int i=0;i<n;i++)
    {
        cout<<"sorted array is "<<arr[i]<<"   "<<endl;
    }
    return 0;
>>>>>>> 99189124e1e56b1245bb6e06e06630f26adfe65f
}