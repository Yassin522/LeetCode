class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> hist(128, -1);
        
        int left = 0, right = 0, max_ans = 0;
        while(right < s.length()){
            char curr_char = s[right];
            if(hist[curr_char] == -1){
                right++;
                hist[curr_char]++;
            } else{
                hist[s[left]]--;
                left++;
            }
            max_ans = max(max_ans, right - left);
            
        }
        return max_ans;
    }
};