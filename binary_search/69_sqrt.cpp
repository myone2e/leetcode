class Solution {
public:
    int mySqrt(int x) {
        int start = 0;
        int end = x;
        long long mid; // input size is big?
        while (start <= end){
            mid = (start+end)/2;
            if (mid * mid == x) return mid;
            else if (mid*mid < x) start = mid + 1;
            else{
                end = mid - 1;
            }
        }
        return start-1; // not returning the index
    }
};