#include<iostream>
#include<algorithm>
using namespace std;
//int findkey(int arr[],int size,int key)
//{
   // int start=0;
   // int end=size-1;
   // int mid=start+(end-start)/2;
   // while(start<=end)
   // {
   //     if(key==arr[mid])
   //     {
   //         return arr[mid];
   //     }
   //     else if(key<arr[mid])
   //     {
   //         end=mid-1;
   //     }
   //     else
   //     {
   //         start=mid+1;

   //     }
   //     mid=start+(end-start)/2;
   // }
   // return -1;
    
//}
int main()
{
    int arr[]={10,20,30,40,50,60,70,80};
    int size=sizeof(arr)/sizeof(int);
   // int key;
   // cout<<"enter the key that you want to search"<<" "<<endl;
   // cin>>key;
    //now sorting the array first
    //sort(arr.start(),arr.end());
   // int ans=findkey(arr,size,key);
   // cout<<"the answer is "<<ans<<endl;
    int ans=binary_search(arr,arr+size,200);
    cout<<ans;
    

}