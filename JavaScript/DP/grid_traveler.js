/**
 * Say that you are  a traveller on a 2D GRID. You begin in tje top-left corner of
 * and your goal is to tra vel from the top-left corner to the bottom right corner 
 * you may only go down or right. You
 * 
 * IN HOW MANY WAYS CAN YOU TRAVEL TO THE GOAL ON A GRID WITH DIMENSIONS M*N
 * 
 */

//2,3-> 3
//1,1->1
//Start=End

//0,1->0

const gridTraveler=(m,n,memo={})=>{
    const key=m+','+n;
    if(key in memo) return memo[key];
    if(m===0 || n===0) return 1;
    if(m===1 && n===1) return 0;

    memo[key]=gridTraveler(m-1,n)+gridTraveler(m,n-1);
    return memo[key];
};
console.log(gridTraveler(3,3));
console.log(gridTraveler(1,1));
console.log(gridTraveler(2,3));