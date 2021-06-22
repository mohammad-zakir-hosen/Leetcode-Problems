204. Count Primes
class Solution {
public:
    bool isprime(int x){
        
        int i;
        for(i=2;i<=sqrt(x);i++){
            if (x%i==0)
                return false;
            
        }
        return true;
    }
    
    int countPrimes(int n) {
        int i;
        
        int primecount=0;
        
        if(n==0 || n==1)
            return 0;
        if(n==2)
            return 0;
        for (int x=2;x<n; x++){
        
            if (isprime(x))
                primecount++;
            
        }
        
        return primecount;
    }
};
