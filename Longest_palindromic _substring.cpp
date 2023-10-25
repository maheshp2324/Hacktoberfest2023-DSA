class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int ans = INT_MIN;
        for(int i=0 ; i<n ; i++){
            int j = n-1;
            int left = i;
            int right = n-1;
            while(left<=right){
                if(s[left]==s[right]){
                    left++;
                    right--;
                }
                else{
                    left = i;
                    j--;
                    right = j;
                }
            }
          ans = max(ans , j-i+1);  
        }

       string fans = "";
       bool done  = false;

       for(int i=0 ; i<n ; i++){
            int j = n-1;
            int left = i;
            int right = n-1;
            while(left<=right){
                if(s[left]==s[right]){
                    left++;
                    right--;
                }
                else{
                    left = i;
                    j--;
                    right = j;
                }
            }

          if(j-i+1==ans && !done){
              done = true;
              for(int k=i ; k<=j ; k++){
                  fans += s[k];
              }
          }
        }
        return fans;
    }
};
