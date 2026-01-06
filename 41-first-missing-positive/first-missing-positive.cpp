class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
      int n = nums.size();
       
      // why ums[nums[i] - 1] != nums[i] becasue we check if the value 4 is present at random index and we dont know and we check if the value 4, is placed or not index if not then placed into that place
      for(int i = 0; i < nums.size(); i++){
        while(nums[i] > 0 && nums[i] <= n && nums[nums[i] - 1] != nums[i]){
          swap(nums[i], nums[nums[i] - 1]);
        }
      }

      for(int i = 0; i < n; i++){
        if(nums[i] != i + 1){
          return i + 1;
        }
      }

      // if all present 

      return n + 1;
    } 
};


// agar numsay ki length n hein iska mtlb answer [1, n + 1] ke range me hoga
//and us numsay mein 1 se n tk me saare numbers present hein it means ab smallest missing number n + 1 hoga 

// nhi toh jo pehla missing number hoga woh 1 se n ke bich me hoga and wahi answer hoga
// missing value = x
//correct index = x - 1
//numsay ko aise renumsange karo ki:
// nums[i] = i + 1
// yeah kaam swap karke hota hein isliye
// Ab numsay scan karo:

// jaha nums[i] != i + 1

// wahi i + 1 missing positive hai
// Har number ko uski correct position par bhejo

// Condition yaad rakho:

// current number > 0

// current number <= n

// current number already correct position par nahi hai

// 👉 Tab tak swap karo jab tak sahi jagah na aa jaye.

//nums[nums[i] - 1] != nums[i]
//“Kya jo number nums[i] hai, wo apni correct jagah par already baitha hua hai ya nahi?”

// 1️⃣ Correct position kya hoti hai?

// Agar:

// value = x


// toh uski correct index hoti hai:

// x - 1