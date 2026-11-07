class Solution {
  public:
    long long sumOfDivisors(long long n) {
        // Code here
    long long sum = 0;
    while(n>0){
    
        for(int i = 1; i<=n; i++){
            if(n%i==0){
            sum = sum + i;
            }
        }
        n--;
    }
    return sum;
    }
};