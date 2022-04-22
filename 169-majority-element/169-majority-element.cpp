class Solution {
  public:
      int majorityElement(vector<int>& nums) {
	  
          int n=nums.size(),res;
		  //Map to store the frequency of all elements
          map<int,int> mp;
          for(int i=0;i<n;i++){
             mp[nums[i]]++;
         }
		
         for(int i=0;i<n;i++){
               if(mp[nums[i]]>(n/2)){
                   res=nums[i];
              }
         }
         return res;
       }
 };