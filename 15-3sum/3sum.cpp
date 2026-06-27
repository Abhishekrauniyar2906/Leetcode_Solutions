class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
  
vector<vector<int>>ans;
       
        // Code Here
        sort(arr.begin(), arr.end());
        int n = arr.size();
        for(int i = 0; i < n - 2; i++){
            int left = i + 1;
            int right = n - 1;
            
            if(i > 0 && arr[i - 1] == arr[i]){
                continue;
            }
            
            while(left < right){
                if(arr[left] + arr[right] == -arr[i]){
                   ans.push_back({arr[i], arr[left], arr[right]});
                    
                    while(left < right && arr[left] == arr[left + 1]){
                        left++;
                    }
                    
                    while(left < right && arr[right] == arr[right - 1]){
                        right--;
                    }
                    left++;
                    right--;
                }
                
                else if(arr[left] + arr[right] < -arr[i]){
                    left++;
                }
                else{
                    right--;
                }
            }
            
        }
        return ans;
    }
};