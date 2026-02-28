function nthUglyNumber(n: number): number {
    const dp: number[] = new Array(n+1).fill(0);
    dp[1] = 1;
    let p2: number = 1, p3:number = 1, p5:number = 1;
    for(let i: number = 2; i <= n; i++){
        let next2:number = dp[p2]*2;
        let next3:number = dp[p3]*3;
        let next5:number = dp[p5]*5;
        dp[i] = Math.min(next2,next3,next5);
        if(dp[i] == next2) p2++;
        if(dp[i] == next3) p3++;
        if(dp[i] == next5) p5++;
    }
    return dp[n];
};