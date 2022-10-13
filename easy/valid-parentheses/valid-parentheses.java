class Solution {
    
    char[] stack = new char[10000];
    int top=-1;
    
    public boolean checkTop(char brack){
        
        if(top>=0){
            if(stack[top]=='(' && brack==')') return true;
            if(stack[top]=='[' && brack==']') return true;
            if(stack[top]=='{' && brack=='}') return true;
        }
        stack[++top] = brack;
        return false;
    }
    
    public boolean isValid(String s) {
        
        char[] par = s.toCharArray();
        
        for(char brack : par){
            
            if(top==-1 && (brack=='}' || brack==']' || brack==')')) return false;            
            if(checkTop(brack)) top--;
        }
        if(top==-1) return true;
        return false;
    }
    
}
