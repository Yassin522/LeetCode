class Solution {
public:
    bool hasAlternatingBits(int n) {
        string binary;
        while(n>0){
            if(n%2){
                binary += '1';
            }else{
                binary += '0';
            }
            n = n/2;
        }
        for(int i=1;i<binary.length();i++){
            if(binary[i-1]==binary[i]) return 0;
        }
        return 1;
    }
};