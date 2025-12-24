/*
cd "50 day challenge\Recursion"
node Josephus_problem.js
*/

var findTheWinner = function(n, k) 
{
    let circle = [];
    for(let i = 1; i <= n; i++) circle[i-1] = i;
    
    let idx = 0;
    while(n != 1)
    {
        idx = (idx+k-1) % n;    // delete after k steps (count yourself -1)
        circle.splice(idx, 1);
        n--;                    // update n or use circle.length instead    
    }
    return circle[0];
};

console.log(findTheWinner(4, 2));