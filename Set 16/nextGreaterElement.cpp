class Solution {
public:
   vector<int> nextGreaterElements(vector<int>& v) {
        int n = v.size();
        // here we are initializing the vector with -1's
        vector<int> res (n,-1);
        stack<int> st;
        // now to tackle the circular search we are traversing on double size of the array and taking mod % to get the actual value
        for(int i = 2*n-1; i >= 0; --i){

         // here we will remove all the smaller than v[i] elements from the stack until the stack is empty 
            while(!st.empty() and st.top() <= v[i%n])st.pop();

            // if all the elements are checked and the array is not empty will assign the st.top() value to res[i]
            if(i<n){
                if(!st.empty()) res[i] = st.top();
            }
            // and after that pushing the assigned element to stack for further comparison
            st.push(v[i%n]);
        }
        return res;
    }
};