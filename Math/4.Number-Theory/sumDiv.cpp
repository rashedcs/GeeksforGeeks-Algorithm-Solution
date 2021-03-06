//Naive Solution :
int sumDivisor(int n)
{
   int  sum = 0;
   for(int i=1; i<=n/2; i++)
   {
     if(n%i==0) sum += i;
   }
   return sum+n;
}





//Better Approach 
int numDiv(int n)
{
    int result = 1;   // Initialize result as 1
    for (int p=2; p*p<=n; p++)
    {
        int power = 0;
        while(n%p==0)
        {
          n /= p;
          power++;
        }
        result *= (pow(p, power + 1.0) - 1) / (p-1);
    }
    if (n!=1)    result *= (pow(n,2.0) - 1) / (n-1);
    return result;
}
