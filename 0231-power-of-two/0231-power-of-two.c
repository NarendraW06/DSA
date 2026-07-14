bool isPowerOfTwo(int n) {
    if(n<=0) return 0;
    int k=n-1;
    if((n & k) == 0) return 1;
    return 0;
}