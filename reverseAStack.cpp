class Solution{
public:
   void insertAtEnd(stack<int> &st, int t){
        // 1st base condition
        if(st.empty()){
            st.push(t);
            return;
        }
        
        // 2nd call funtion befor recursion
        int newtamp = st.top();
        st.pop();
        
        // 3rd call recusrion
        insertAtEnd(st, t);
        
        // 4th call funtion after recursion
        st.push(newtamp);
    }

    void Reverse(stack<int> &St){
        
        // 1st base condition
        if(St.empty()){
            return;
        }
        
        // 2nd call funtion befor recursion
        int tamp = St.top();
        St.pop();
        
        // 3rd call recursion
        Reverse(St);
        
        
        // 4th call funtion after recursion
        insertAtEnd(St, tamp);
        
        
        
    }
};