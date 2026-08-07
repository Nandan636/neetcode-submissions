class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        // can also use encodede += "c"
        for(string s : strs){
            
            encoded+=to_string(s.length());
            encoded.push_back('#');
            for(char c : s){
                encoded.push_back(c);
            }
            
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> strs;
        
        int i = 0;
        string digit;
        string decoded;
        while(i<s.size()){
            while(s[i]!='#'){
                digit+=s[i++];
            }
            i++;
            int size = stoi(digit);
            for(int j = 0;j<size;j++){
                decoded+=s[i++];
                
            }
            strs.push_back(decoded);
            digit.clear();
            decoded.clear();
        }
        return strs;
    }
    
};
