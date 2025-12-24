/*
cd "50 day challenge\Recursion"
node k-th_symbol_in_Grammar.js
*/

// let x = (~5);
// const twosComplementBinary = ((5 & ~5)>>>0).toString(2);
// console.log(twosComplementBinary);

// function invertBits(binaryStr) {
    //   return binaryStr
//     .split('')                 // split into characters
//     .map(bit => bit === '0' ? '1' : '0') // flip each bit
//     .join('');                 // join back into string
// }
// function f(n)
// {
//     if(n <= 1) return "0";
//     let half = f(n-1);
//     return half + invertBits(half) ;
// }

// var kthGrammar = function(n, k) {
//     let line = f(n);
//     console.log(line[k-1]);
// };


var kthGrammar = function(n, k) 
{
    if (n === 1) { return 0; } // strict equality operator (no type conversion)

    let line = 2 ** (n - 1);
    let mid = line / 2;

    if (k <= mid) {
        return kthGrammar(n - 1, k);
    } 
    else {
        // (1-x) works like ! (not):  1 - (1) = (0)  ||  1 - (0) = (1)          
        return 1-kthGrammar(n - 1, k - mid); 
    }
};


console.log(kthGrammar(2,1));

