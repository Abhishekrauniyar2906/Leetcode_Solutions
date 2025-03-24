class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int FirstOccurrence = firstoccurrence(nums, target);
        int LastOccurrence = lastoccurrence(nums, target);
        vector<int> result = {FirstOccurrence, LastOccurrence};
        return result;
    }
    private:
        int firstoccurrence(vector<int>&nums,int target){
            int s=0;
            int e=nums.size()-1;
            int ans=-1;
            while(s<=e){
                int mid=(int)(s/2.0 + e/2.0);
                if(nums[mid]==target){
                    ans=mid;
                    e=mid-1;
                }
                else if(nums[mid]<target){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
            return ans;

        }
        int lastoccurrence(vector<int>&nums,int target){
            int s=0;
            int e=nums.size()-1;
            int ans=-1;
            while(s<=e){
                int mid=s+(e-s)/2;
                if(nums[mid]==target){
                    ans=mid;
                    s=mid+1;
                }
                else if(nums[mid]<target){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
            return ans;
        }
    };
