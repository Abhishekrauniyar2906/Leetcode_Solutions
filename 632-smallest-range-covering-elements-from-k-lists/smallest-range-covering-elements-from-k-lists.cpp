class Info{
    public:
         int data;
         int rowIndex;
         int colIndex;
    Info(int data, int row, int col){
        this -> data = data;
        this -> rowIndex = row;
        this -> colIndex = col;
    }
};

struct Compare {
    bool operator()(Info* a, Info* b) {
      return  a->data > b->data;  
    }
};


class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
      priority_queue<Info*, vector<Info*>, Compare> pq;

      int mini = INT_MAX;
      int maxi = INT_MIN;

    //   process first k elements
      for(int i = 0; i < nums.size(); i++){
        int element = nums[i][0];
        Info* temp = new Info(element, i, 0);
        pq.push(temp);
        mini = min(mini, element);
        maxi = max(maxi, element);
        
      }  

      int ansStart = mini;
      int ansEnd = maxi;

      while(!pq.empty()){
        Info* topNode = pq.top();
        pq.pop();

        // int topData = topNode -> data;
        int topRow = topNode -> rowIndex;
        int topCol = topNode -> colIndex;

           mini = topNode -> data;
         //check new range is smaller than previous
        if((maxi - mini) < (ansEnd - ansStart)){
           ansStart = mini;
           ansEnd = maxi;
        }

        if(topCol + 1 < nums[topRow].size()){
            int  newElement = nums[topRow][topCol + 1];
            maxi = max(maxi, newElement);
            Info* next = new Info(newElement, topRow, topCol + 1);
            pq.push(next);
        }

        else{
            break;
        }
    }
     vector<int>ans;
        ans.push_back(ansStart);
        ans.push_back(ansEnd);
        return ans;
    } 
};