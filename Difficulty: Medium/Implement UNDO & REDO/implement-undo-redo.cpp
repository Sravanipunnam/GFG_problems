class Solution {
  public:
 vector<char>st;
stack<char>ch;
    void append(char x) {
        // append x into document
        st.push_back(x);
        
    }

    void undo() {
        // undo last change
        ch.push(st.back());
        st.pop_back();
    }

    void redo() {
        // redo changes
        st.push_back(ch.top());
        ch.pop();
    }

    string read() {
        // read the document
        string res;
        for(int i=0;i<st.size();i++){
            res+=st[i];
        }
        return res;
    }
};