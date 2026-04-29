class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.size();
        int n2 = word2.size();
        string str="";
        int i=0, j=0; 
        while( i < n1 || j < n2){
            if( i < n1) str.push_back(word1[i++]);
            if( j < n2) str.push_back(word2[j++]);
        }
        return str;
    }
};


// class Solution {
// public:
//     string mergeAlternately(string word1, string word2) {
//         string str ="";
//         int n1 = word1.length(), n2 = word2.length();
//         for( int i = 0; i < min(n1, n2); i++){
//             str += word1[i];
//             str += word2[i];
//         }
//         return ( n1 > n2) ? str += word1.substr(n2, n1-1) : str += word2.substr(n1, n2-1) ;
        
//     }
// };