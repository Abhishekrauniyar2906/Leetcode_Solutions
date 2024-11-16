class Solution {
    public List<Integer> majorityElement(int[] nums) {
        
      int n = nums.length;
       HashMap<Integer,Integer> mp = new HashMap<>();
      for(int x : nums)
      {
        mp.put(x , mp.getOrDefault(x,0)+1);
      }
      
      n = n/3;
      List<Integer> ans = new ArrayList<>();
      
      for(Map.Entry<Integer,Integer> entry : mp.entrySet())
      {
          if(entry.getValue() > n)
          {
              ans.add(entry.getKey());
          }
      }
      
      return ans;
    }
}