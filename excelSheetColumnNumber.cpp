171. Excel Sheet Column Number
class Solution {
public:
    int titleToNumber(string s) {
        int i=0;
        int multiply=0;
        int sum=0;
        int charnum ;
        int times26 =1;
        if(s.length()==1)
            return ((s[0]-'A')+1);
        else if (s.length()==2)
            return ((s[0]-'A')+1)*26 + ((s[1]-'A')+1);
        else{
            while(i<s.length()-1){
            
                   times26=1;
                   for (int j=i; j<s.length()-1; j++){
                       times26 *= 26; 
                   }
            sum += times26 * ((s[i]-'A')+1); 
                
            
            i++;
        }
        }
        
        
        sum  += ((s[s.length()-1]-'A')+1);
        return sum;
    }
};
