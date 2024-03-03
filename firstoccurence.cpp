#include<iostream>
#include<vector>
using namespace std;

//making the function
int firstocc(vector<int> arr,int key)
{
    //applying binary search
    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;//if element found first time
            end=mid-1; //now we check in left side of array we check in left bcoz we know that binary search can apply
         // only on the sorted array so it is confirm if we get the first element at the left
        }
        else if(key<arr[mid])
        {
            //search in left 
            end=mid-1;
        }
        else 
        {
            //search in right
            start=mid+1;
        }
        //update the value of mid
        mid=start+(end-start)/2;
    }
    return ans;
}

int main()
{
    //first occurence 
    //problem:-find the index of element first occurin array
    //concept:- the main idea is traverse the array if the element find in left the again traverse to check it is
    //first occurence or not if yes return it else again traverse by update the mid
    vector<int> arr{1,2,3,3,3,4,4,5,6};
    //int size=sizeof(arr)/sizeof(int);
    int key;
    cout<<"enter the key to check"<<endl;
    cin>>key;
    int ans=firstocc(arr,key);
    cout<<"index of first occurence is "<<ans;
    return 0;


}