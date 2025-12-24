#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits.h>

#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    return 0;
}



// Special Problems
// Level 1\weeks\week 3\sheet\I_Snacktower  -->  https://codeforces.com/group/g3REqA871s/contest/570641/problem/I
// Level 1\weeks\week 3\sheet\L_Yet Another Broken Keyboard.cpp  -->  https://codeforces.com/group/g3REqA871s/contest/570641/problem/L
// Level 1\weeks\week 3\contest\B.cpp (Maths - sum of sum) --> https://codeforces.com/group/3MTZPM7hsC/contest/652811/problem/B



// DO NOT EXCEED SIZE LIMIT
// max int: 10^9
// max long long: 10^18 
// float offers single-precision, providing approximately 6-7 significant decimal digits of precision.
// double offers double-precision, providing approximately 15-17 significant decimal digits of precision.
int n = 1e5, l = 1e9;
long long a = (long long)n*n - (long long)l*l;      // or:      (static_cast<long long>(n) * n) - (static_cast<long long>(l) * l);
cout << a;



// Reaed & Write
    // The C functions scanf and printf 
    // alternative to the C++ standard streams. They are usually a bit faster, but they are also more difficult to use.
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d %d\n", a, b);

    // Read line
        string s;
        getline(cin, s);

    // Unknown amount of data
        while (cin >> x) {
        // code
        }

    // Files
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
//



/* Type Conversion
    -Implicit conversion: Conversion Is Automatically done By The Compiler
    -Explicit conversion(Type casting): Conversion Is done By The Programmer:
        int c = 90;
        cout << char(c) << endl;
*/

// Pointer - Reference 
int x = 5;
cout << &x << endl;   // cout pointer of x (reference operator)    

int &ref_x = x;       // x and ref_x have the same address (ref_x is an alias to x)
cout << &ref_x << endl;

int *ptr = &x;        // store pointer
cout << ptr << endl;  // cout pointer of x
cout << *ptr << endl << endl; // cout the value ptr points to (dereference operator)



// Dynamic Variables
int *num = new int(1);  // allocated during excution (at run time) in the heap
cout << *num;

delete num;             // always remember to free dynamic allocated space 
num = nullptr;



// Arrays
// memory is allocated at compile time(at the stack) having a fixed size. We cannot update the size of this array.
    int a[] = {1, 2, 3};
    cout << *(a+2); //  3

    // Fixed-Sized
    // static array types are distinct based on their size. 
    int old_arr[3] = {3, 4, 5};
    int new_arr[5] = {3, 4, 5, 10, 11};
    old_arr = new_arr;                 // error:  incompatible types in assignment of 'int [5]' to 'int [3]

    // Different ways of passing an array to function:
        // 1. taking a pointer (int *)
        void f1(int *a, size_t n);
        void f2(int x[], size_t n);    // Exactly the same as int *a

        // The 100 is ignored in a function parameter; x still decays to int*. sizeof(x) prints pointer size 
        void f3(int x[100]);                

        // 2. Passing a reference
        void foo_4(int(&x)[100]);       // only accepts arrays of 100 integers. sizeof(x) prints 100
        /* 
         you have to use:   type (&array)[size]    
         to clarify to the compiler that you want a reference to an array,
         rather than the (invalid) array of references:     type &array[size];
        */

        // 3. array<T,N>
        void f5(array<int, 4> a);            // copy
        void f5_ref(const array<int,4>& a);  // refer without copy

    // Char Array
    // define char arraies larger by 1 to keep space for the '\0' character

        // Taking input
            char str[3];
            //cin >> str; // might cause an ERROR
            for(int i = 0; i < 3; i++) cin >> str[i]; // safer

        // all the following are the same
            char str[3] = "ab";
            char str[] = {'a', 'b'};
            char str[3] = {'a', 'b'}; // where str[2] == '\0'

        // Prints a string, not address 
            cout << str; 

        // char to int
            cout << char(65); // A

    // Dynamic array 
    // memory is allocated at run time(at the heap) but NOT having a fixed size.
        int *p;       
        // then later...
        p = new int[3];
        delete[] p; p = nullptr;

        // Change size through copying (since we are dealing with pointers)
        int* dynamic_old_arr = new int[]{3, 4, 5};
        int new_size = 5;
        int* dynamic_new_arr = new int[new_size]{3, 4, 5, 10, 11};

        dynamic_old_arr = dynamic_new_arr;

        for(int i = 0; i < new_size; i++)
        {
            cout << dynamic_old_arr[i] << " ";
        }


    // Return
        array<int, 5> func1();  // if size is known
        vector<int> func2();    // if not
        // dynamic array
        int* func3(size_t n) 
        {
            int* p = new (nothrow) int[n];  // returns nullptr on failure instead of throwing
            if (!p) return nullptr;

            for (size_t i = 0; i < n; ++i) 
                p[i] = 0;

            return p;
        }   

        int main() {
            auto p = func3(10);
            if (!p) cerr << "allocation failed\n";

            // YOU MUST DEALLOCATE THE MEMORY
            delete[] p;
            p = nullptr;
        }
//



// Type Alias
    using ll = long long;
    // or
    typedef long long ll;
    ll n = 1e15;
    cout << sizeof(n) << endl;
/


// Ternary (conditional) operator
int num = 9;
cout << "num relativity to 5 is " << (num > 5 ? "greater" : (num < 5 ? "lower" : "Equal")); // nested ternary


#include<algorithm>

    // Sort
    sort(arr, arr + n)
    sort(arr, arr + n, greater<int>());     // sort in descending order
    sort(vec.begin(), vec.end());           // sort string or vector. use begin(), end() iterators   (end() points one after the last char)

    // Reverse
    reverse(arr, arr + n)

    // Max Element
    *max_element(arr, arr + n);

    // Index of value
    distance(arr, find(arr, arr + n, a))    // get index of element (a) in array (arr) with size(n)
//

#include<iomanip>

    // Set float, double fixed precision
    cout << fixed << setprecision(8) << double_number;
    printf("%.8f\n", double_number);
//

#include <numeric>

    // Sum
    sum = accumulate(arr, arr+n, 0);
/


// String
    size(str)

    to_string(number)           // number to string  
    stoi(str)                   // string to int
    stod(str)                   // string to double
    stoll(str)                  // string to long long
   
    str.back()                  // reference to the last element == str[size(str) - 1]

    s.begin()                   // gets an iterator to the first element in an string
    s.end()                     // gets an iterator to the last element in an string -->('\0')

    s.erase()                   // Erases whole string
    s.erase(idx)                // Erases all characters after idx
    s.erase(idx, 3)             // Erases 3 characters after idx
    s.erase(itr)                // Erases character at itr
    s.erase(first, last)        // Erases character in range [first, last)
    s.erase(s.begin() + 4);     // Erases s[4]
    s.erase(s.end() - 1);       // Erases the last character in the string (before the '\0')
/


#include <bits/stdc++.h>


    lcm(a, b)
    __gcd(a, b)
/



#include <cmath>
    ceil()     // round up
    round()    // round
    floor()       // round down
/


// check if double number has a fraction 
#include <cmath>
bool hasNoDecimal(double x)
{
    double integer_part = trunc(x);
    return abs(x - integer_part) < 1e-9 || abs(x - integer_part) > (1 - 1e-9);
}



// Map (dictionary)
    map<int, int> numbers;
    int n = 10, num;
    for(int i = 0; i < n; i++)
    {
        cin >> num;
        numbers[num]++; // if num didn't exists the map will create a pair for it with default value [num, 0] (int's default 0)
    }

    // iterate over pairs
        for(auto [num, ocurances] : numbers)
        {
            if(ocurances % 2 == 1) 
            {
                cout << num << endl;
                break;
            }
        }
//

/* Partial Sum
    Given q ranges of the form [l,r], find for each point x∈[1,n]
    the number of ranges that contain that point.

    Solution: arr[l]++ and arr[r+1]-- ,then after taking all ranges perform (prefix sum)
    
    For [1, 3] 
    arr = [1,0,0,−1,0,0]
    arr = [1, 1, 1, 0, 0, 0]  // after prefix sum
*/

/* How to solve recursion problems:
    1. Define the problem
    2. Define a subproblem from it
    3. (Trust) the process
    4. Link 1 & 2
    5 write the Base Case:      the (Last valid || First invalid) case

    * if you have a tree, you can use recursion

    Recursive vs Iterative Solution:
    - Any recursion problem can be solved iterativly
    - Iteration has better space complixty (Doesn't use (call stack) space like recursion)
    - Recursion has better readability, and sometimes it's much simpler
    - Recursion has 2 phases:
        1. Ascending Phase: Calling phase
        2. Descending Phase: Return phase

    - Iteration has only 1 phase

    Time comp   -->     nodes * T(node)
    Space comp  -->     depth (number of functions in the call stack)
*/


/* Maths

    Geometric progression
        sum = a + ak + ak^2 +··· + b = (bk−a) / (k−1)

        where (a) is the first number, (b) is the last number and 
        the ratio between consecutive numbers is k. For example,

        This formula can be derived as follows: 
            Let S = (a) + ak + ak^2 +··· + b
            By multiplying both sides by k, we get
            kS = ak + ak^2 + ak^3 +··· + (bk)
            and solving the equation
            kS − S = bk − a
            S(k-1) = bk-a

        special case:
        1 + 2 + 4 + 8 +... + 2^(n−1) = 2^n − 1
        where a = 1, b = 2^(n−1), k = 2
    end

    Sum of Polynomial 
        1st degree:
            sum = 1 + 2 + 3 +... + n       -->      n(n+1)/2

            This formula can be derived as follows: 
                S = 1 +   2   +... + (n-1) + n
                S = n + (n-1) +... +   2   + 1
                then 
                2*S = (n+1) + (n+1) + (n+1) + ...(n times) 
                2*S = n(n+1)
                S   = n(n+1)/2
        
        2nd degree: 
            S = 1^2 + 2^2 + 3^2 .... n^2   -->      n(n+1)(2n+2)/6
    end 

    Bits
    x is divisible by 2^k when:     x & (2^k − 1) = 0

        This formula can be derived as follows: 
            12 is divisible by 4 as 12 & 3 =
            1100 &
            0011
            = 00

            which means that 12 doesn't have (1 or 2 or 3 which will make it undivisible)
            like in 9, 10, 11 notice:
            9  % 4 = 1
            10 % 4 = 2
            11 % 4 = 3
    end

    The left bit shift x << k    -->   (x * 2^k) appends k zero bits to the number
           8 4 2             32 16 8            (notice how the weights doubled by 2^2)
        14(1 1 1 0) << 2 = 56(1 1 1 0 0 0)
    
    The right bit shift x >> k   -->   (x / 2^k) removes the k last bits from the number
        49(110001) >> 3 = 6(110)

*/

// Bits
    // Read bits | Get binary representation
        // instead of 31 you can get use the number of bits that contains x --> log2(x)  
        // (we didn't round up as (i) reaches 0)
        for (int i = 31; i >= 0; i--) 
        {
            /*
                x = 13   -->  1101
                x & 1000 --> &1000 --> 1
                x & 100  -->  &100 --> 1
                x & 10   -->   &10 --> 0
                x & 1    -->    &1 --> 1
            */
            if ( x & (1 << i) )
                cout << "1";
            else 
                cout << "0";
        }

    // Edit Bits
        x |= (1 << pos);  // turn the bit at position (pos) into 1
        x &= ~(1 << pos); // turn the bit at position (pos) into 0
        /*
            13 &= ~(1 << 3) --> 13 &=(1000 --> 0111)

              1101
            & 0111
            = 0101
        */

    // Set
    // since int has 31 bits and we can edit each one of them, we can use it to hold a set range (0 : 31)
        // x = {1,3,4,8)    we can represeant it through:
        int x = (1<<1)|(1<<3)|(1<<4)|(1<<8);


//



// int nums[5] = {1, 4, 9, 2, 6};
// cout << *max_element(nums, nums + 5);
// int n = 100001;
// int map[n];
// for (int i = 0; i < n; i++)
// {
//     map[i] = i;
// }
// long long sum = 0;
// int a = 0, b = 10000;
// while (n > 10000)
// {
//     sum = accumulate(map + a, map + b, sum);
//     a += 10000;
//     b += 10000;
//     n -= 10000;
// }
// sum = accumulate(map + a, map + a + n, sum);
// cout << sum;