bool isPalindrome(int x) {
    long long rev=0,k=x;
while(x>0)
{   int rem=0;
    rem=x%10;
   rev=rev*10+rem;
   x/=10;
}
if(rev==k)
{
    return true;
}
    return false;    
}