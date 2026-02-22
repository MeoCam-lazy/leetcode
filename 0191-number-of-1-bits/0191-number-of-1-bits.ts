function hammingWeight(n: number): number {
    let res : number = 0;
    for(let i:number = 0; i < 32; i++){
        if((n>>i)&1) res+=1;
    }
    return res;
};