class Solution {
public:
    int calPoints(vector<string>& operations) {
       stack<int> st;
       int sum = 0;
       for(string c : operations ){
        if("D" == c){
            if(!st.empty()){
                st.push(st.top()*2);
                sum += st.top();
            }
        }
        else if("+"== c){
            if(!st.empty()){
                int top = st.top();
                st.pop();
                int seclast = st.top();
                st.push(top);
                st.push(top+seclast);
                sum += st.top();
            }
        }
        else if("C" == c){
            sum -=st.top();
            st.pop();
        }
        else{
            int no = stoi(c);
            st.push(no);
            sum+=st.top();
        }

       } 
       return sum;
    }
};