class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n = words.size() ; 
        int arr[26] = {0} ; 
        for(string &word : words){
            for(char &ch : word){
                arr[ch - 'a']++ ; 
            }
        }

        for(int ele : arr){
            if(ele % n != 0 ){
                return false ; 
            }
        }

        return true ;
    }
};
