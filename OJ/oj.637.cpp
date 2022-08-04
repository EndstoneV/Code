class Solution {
public:
	int longestValidParentheses(string s) {
    int left = 0;int right = 0; 
    int maxlength = 0;//存储最大长度
    int l = s.length()-1;
    for(int i = 0;i<s.length();i++){
        if(s[i] == '(')
            left++;
        if(s[i] == ')')
            right++;
        if(right == left)
            maxlength = max(maxlength,2*right);
        else if(right>left)
        {
            left =0;
            right = 0;
        }
        
    }
     left = 0;right = 0; //注意归零
    for(int i = s.length()-1;i>=0;i--){
        if(s[i] == '(')
            left++;
        if(s[i] == ')')
            right++;    
        if(right == left)
            maxlength = max(maxlength,2*right);
        else if(left>right)
        {
            left =0;
            right = 0;
        }
        
    }
        return maxlength;
    }
};
