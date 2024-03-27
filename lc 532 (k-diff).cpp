class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        //Two pointer approach
        sort(nums.begin(),nums.end());
        set<pair<int,int>> ans;
        int i=0,j=1;
        while(j<nums.size())
        {
            int diff=nums[j]-nums[i];
            //condition 1
            if(diff==k)
            {
                ans.insert({nums[i],nums[j]});
                i++,j++;
            }
            else if(diff>k) {
                i++;
            }
            else {
                j++;
            }
            if(i==j) j++;
            


            
        }
        return ans.size();

        
        
    }
};