class Solution {
typedef long long ll;
public:
    ll gcd(ll a, ll b){
        if (b == 0) return a;
        return (b == 0)?(b):(gcd(b,a%b));
    } //This is a helper function to find greatest common divisor
    ll lcm(ll a, ll b){
        return (a/gcd(a,b)*b);
    } //This is another helper function to find least common mutiple


    /*Ok I will explain how our solution work in my own words
    1. Count not build
    Instead of building a array of supid numbers, we wil pick a random number X and then ask -How many numbers between 1 and X are divisible bt a,b or c?
    We will use this function F(x) (input get an integer X and return quantity of numbers are divisible by a,b and c)
    if F(X) < n: the nth ugly number is larger than X
    if F(X) >= n: the nth ugly number is smaller or equal to X
    2. The math Inclusion and Exclution principle
    How to we define F(X)? We will count it by use this equation:
    F(X) = X/a + X/b + X/c - X/(divisible by a,b) - X/(divisible by a,c) - X/(divisible by b,c) + X/(divisible by a,b,c)
    *A number is divisible by both a and b will divisible by least common a and b
    count(a,b) = X/lcm(a,b)
    3. Strategy
    We will use binary search to search between smallest possible answer(1) and larget (Max_int) 
    */

    int nthUglyNumber(int n, int a, int b, int c) {
        //our track limits
        ll lo = 1, hi = 2e9;
        ll answer = hi; //default setting
        //divisible by a/b/c
        ll la = a, lb = b, lc = c;
        //divisible by ab,ac,bc
        ll lab = lcm(la,lb), lac = lcm(la,lc), lbc = lcm(lb,lc);
        //divisible by abc
        ll labc = lcm(lab,lc);
        while(lo <= hi){
            ll mid = lo + (hi-lo)/2;
            ll count = (mid/la) + (mid/lb) + (mid/lc) - (mid/lab + mid/lac + mid/lbc) + mid/labc; // <- this is our F(x) function as described
            if(count >= n){
                answer = mid;
                hi = mid-1;
            }
            else{
                lo = mid+1;
            }
        }
        return (int)answer;
        //Note: I used long long to avoid overflow
    }
};