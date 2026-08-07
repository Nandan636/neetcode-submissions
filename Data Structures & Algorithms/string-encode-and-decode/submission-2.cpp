class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for( string s : strs){
            encoded+=(to_string(s.length()));
            encoded+='#';
            for(char c : s){
                encoded+=c;
            }
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int i =0,size=0;;
        string digit,word;
        while(i<s.length()){
            while(s[i]!='#'){
                digit+=s[i++];
                
            }
            size=stoi(digit);
            digit.clear();
            i++;//skip #
            for(int j = 0 ;j<size;j++){
                word+=s[i++];
            }
            decoded.push_back(word);
            word.clear();
        }
        return decoded;

    }
};
