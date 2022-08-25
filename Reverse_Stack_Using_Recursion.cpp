void insert(stack<int> &s, int temp){

   if(s.size()==0){

       s.push(temp);

       return;

   }

   int val = s.top();

   s.pop();

   insert(s, temp);

   s.push(val);

   return;

}

void reverseStack(stack<int> &s) {

   if(s.size()==0) return;

   int temp = s.top();

   s.pop();

   reverseStack(s);

   insert(s, temp);

}