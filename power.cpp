int power(int x, int n, int acc){
    // base case
       if (n==0){ 
            return acc;
       }

       return power(x,n-1,acc*x);
}