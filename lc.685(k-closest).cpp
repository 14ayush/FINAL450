//approach 1
class Solution {
public:
        vector<int> twoptrapproach(vector<int>& arr, int k, int x) {
            int low=0;
            int high=arr.size()-1;
            while(high-low>=k)
            {
                if(x-arr[low]>arr[high]-x)
                {
                    low++;
                }
                else 
                {
                    high--;
                }
            }
            vector<int> ans;
            for(int i=low;i<=high;i++)
            {
                ans.push_back(arr[i]);
            }
            return ans;


            
        }
        vector<int> findClosestElements(vector<int>& arr, int k, int x) {
            return twoptrapproach(arr,k,x);
            
        }
};


//approach 2

