
//MEMOIZATION-> reminder for myself

// fast access data structure
// js object, keys-> arg to fn, value will be the return value

const fib =(n,memo={})=>{

    if(n in memo) return memo[n];

    if(n<=2) return 1;
    memo[n]=fib(n-1,memo)+fib(n-2,memo);
    return memo[n];
};

console.log(fib(50));
// console.log(fib(8));
// console.log(fib(9));