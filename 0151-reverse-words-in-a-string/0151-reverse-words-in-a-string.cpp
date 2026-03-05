class Solution {
public:
    string reverseWords(string s) {
        stack <string> st;
        string result = "";
        stringstream ss(s);
        string word;
        while(ss >> word){
            st.push(word);
        }
        while(!st.empty()){
            result += st.top();
            st.pop();
            if(!st.empty()) result += " ";
        }
        return result;
    }
};