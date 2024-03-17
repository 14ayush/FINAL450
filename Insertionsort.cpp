#include<iostream>
#include<vector>
using namespace std;
int main()
{

    vector<int> arr{10,1,7,6,14,9};
    int n= arr.size();
    //outer loop to iterate the rounds
    for(int i=1;i<n;i++)
    {
        //Step A: Fetching the values 
        int val=arr[i];
        //now making the inner loop
        int j=i-1;
        for(;j>=0;j--)
        {
            //Step B: now compring the values
            if(arr[j]>val)
            {
                //step C : Shift the values 
                arr[j+1]=arr[j];
            }
            else
            {
                //ruk jana h 
                break;
            }
        }
        //Step D :Copying the values
        arr[j+1]=val;
    }
    //printing the values
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}