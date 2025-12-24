const checkMonotonic = function (array){

    let increasing = true;
    if(array.length && array[0] > array[1])
    {
        increasing = false;
    }

    for(let i = 1; i < array.length; i++)
    {
        let prev = array[i-1];
        if ( (increasing && array[i] < prev) || (!increasing && array[i] > prev))
        {
            return false;
        }
    }
    return true
}

const array = [3, 3];
console.log(checkMonotonic(array));


/*
Run:
cd "50 day challenge\Array"
node Monotonic_Array.js

Description:
    An array is monotonic if it is either monotone increasing or monotone decreasing.
    An array is monotone increasing if all its elements from left to right are non-decreasing.
    An array is monotone decreasing if all  its elements from left to right are non-increasing.
    Given an integer array return true if the given array is monotonic, or false otherwise.

Input:
    monotone increasing:  [-5, -3, -1, 0, 2, 4]
    monotone decreasing:  [3, 2, 1]
    considered monotonic: [], [5], [2, 2, 2, 2]



*/