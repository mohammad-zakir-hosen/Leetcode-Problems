387. First Unique Character in a String

  class Solution {
public:
    int firstUniqChar(std::string s) {
        
        
      int count[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        int i=0, ix=-1, temp;
        while (s[i]!='\0'){
              if ((s[i]>='a' ) && (s[i]<='z')){
                temp = s[i]-'a';
                count[temp]++;
              }
            
           
            i++;
        }
       
        i=0;
        while (s[i]!='\0'){
            if (count[s[i]-'a'] == 1)
                return i;
            
            i++;
        }
        
        
return -1;
    }
};
