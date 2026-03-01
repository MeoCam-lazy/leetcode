class Solution {
public:
    long long gcd(long long a, long long b) {
        while (b) {
            a %= b;
            std::swap(a, b);
        }
        return a;
    }

    long long lcm(long long a, long long b) {
        if (a == 0 || b == 0) return 0;
        long long g = gcd(a, b);
        long long res = a / g;
        if (res > 2e18 / b) return 2e18 + 7; 
        return res * b;
    }

    int nthUglyNumber(int n, int a, int b, int c) {
        long long la = a, lb = b, lc = c;
        long long lab = lcm(la, lb);
        long long lac = lcm(la, lc);
        long long lbc = lcm(lb, lc);
        long long labc = lcm(lab, lc);

        long long lo = 1, hi = 2e9;
        long long answer = hi;

        while (lo <= hi) {
            long long mid = lo + (hi - lo) / 2;
            long long count = (mid / la) + (mid / lb) + (mid / lc) 
                            - (mid / lab) - (mid / lac) - (mid / lbc) 
                            + (mid / labc);

            if (count >= n) {
                answer = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }
        return (int)answer;
    }
};