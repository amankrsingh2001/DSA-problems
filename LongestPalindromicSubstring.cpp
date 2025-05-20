// class Solution {
// public:
//     bool isPalindromic(string &s, int i, int j){
//         while(i<=j){
//             if(s[i]!=s[j]){
//                 return false;
//             }
//             i++;
//             j--;
//         }
//         return true;
//     }

//     string longestPalindrome(string s) {
//         int n = s.size();
//         string str = "";
//         for(int i = 0;i<n;i++){
//             for(int j = i;j<n;j++){
//                 if(isPalindromic(s, i, j)){
//                     int num = j-i+1;
//                     if(num > str.size()){
//                         str = s.substr(i,num);
//                     }
//                 }
//             }
//         }
//         return str;
//     }
// };