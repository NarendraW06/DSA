// int mySqrt(int x) {
//     if(x==1) return 1;
//     int j,int prev=0;
//     for(int i=0;i<=x/2;i++)
//     {
           
//         if(i*i==x)
//         {
//             j=i;
//         }
//     }
//     return j;
// };
int mySqrt(int x) {
    if (x < 2) return x;
    
    int left = 1, right = x / 2, ans = 0;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        // Use division to prevent integer overflow (mid * mid > x)
        if (mid <= x / mid) {
            ans = mid;     // Keep track of the closest smaller integer
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return ans;
}
