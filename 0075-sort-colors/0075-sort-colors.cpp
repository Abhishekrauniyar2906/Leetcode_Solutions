class Solution {
public:
    void sortColors(vector<int>& arr) {
        int index = 0;
        int left = 0;
        int right  = arr.size()-1;
        while(index <= right){
            if(arr[index] == 0){
                swap(arr[index], arr[left]);
                index++;
                left++;
            }
            else if(arr[index] == 2){
                swap(arr[index], arr[right]);
                right--;
}
            else{
                index++;
            }
}
    }
};