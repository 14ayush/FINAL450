#include<iostream>
#include<vector>
using namespace std;

//making function
int peakmountain(vector<int> arr)
{
    //using binary search

    int start=0;
    int end=arr.size()-1;
    int mid=start+(end-start)/2;

    while(start<end)  //here we use start<end because if we use <= then may be a condition when start and end are at same location then eg at 12 so (12<=12) get true and enter in loop that is error /blunder
    {
        if(arr[mid]<arr[mid+1])
        {
            start=mid+1; //means if condition true that means it is already sorted and the answer will be at right of array 
        }
        else 
        {
            end=mid; //means now the element at the left so make array concise
        }
        //update the mid
        mid=start+(end-start)/2;
    }
    //always return the start bcoz the loc of mid may be different in some test case 
    return start;

    
}


int main()
{
    //finding the peak element in array
    //concept:- the basic approach for this question is if the element is greater than element+1 location then we to return that index
    //or we have to find that it is the peak or peak may be at left else search at right
    vector<int> v{0,1,5,2};
    //int key=10;
    int ans=peakmountain(v);
    cout<<"Index of Peak mountain element is "<<ans<<endl;
    return 0;
}