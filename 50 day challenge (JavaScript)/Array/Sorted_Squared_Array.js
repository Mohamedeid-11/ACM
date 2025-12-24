function sortedSquarredArray(array) {
    const neg_array = [];
    const new_array = new Array(array.length);

    // extract negaive numbers and pop them from (array)
    while (array[0] < 0) {
        neg_array[neg_array.length] = -array[0];
        array.shift();
    }

    // compare between the beginning from (array) with the end from (neg_array)
    // to get the smallest number at each round
    // (neg)        [5, 3, 1] <--
    // (array)  --> [0, 2, 4]
    for (let i = 0; i < new_array.length; i++) 
    {
        if (!array.length || neg_array[neg_array.length - 1] < array[0])
        {
            new_array[i] = Math.pow(neg_array[neg_array.length - 1], 2);
            neg_array.pop();
        }
        else 
        {
            new_array[i] = Math.pow(array[0], 2);
            array.shift();
        }
    }

    return new_array;
}


function sortedSquarredArray_optimal(array) {
    const new_array = new Array(array.length).fill(0);
    let pointerLeft = 0;
    let pointerRight = array.length - 1;

    // the greatest numbers are at the out side
    // -->[-5, -3, -1, 0, 2, 4]<--
    // while the smallest are in the middle [-1, 0]     (requires the while loop in the previous solution
    
    for (let i = array.length - 1; i >= 0; i--) {

        const leftSquared = Math.pow(array[pointerLeft], 2);
        const rightSquared = Math.pow(array[pointerRight], 2);

        if (leftSquared > rightSquared) {
            new_array[i] = leftSquared;
            pointerLeft++;
        }
        else {
            new_array[i] = rightSquared;
            pointerRight--;
        }
    }

    return new_array;
}

const array = [-5, -3, -1, 0, 2, 4];
console.log(sortedSquarredArray_optimal(array));

/*
Run:
cd "50 day challenge\Array"
node Sorted_Squared_Array.js

Description:
You are given an array of Integers in which each subsequent value is not less than the previous value.
Write a function that takes this array as an input and returns a new array
with the squares of each number sorted in ascending order.

Input:
[-5, -3, -1, 0, 2, 4]

Hint:
there might be negative numbers at the beginning

*/