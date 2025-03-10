#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    int n;
    cin >> n;

    if (ceil(sqrt(n)) == sqrt(n))
        cout << "Face up." << endl;
    else
        cout << "Face down." << endl;

    return 0;
}

/*

the (n)th card starts with its (face down)
so when the card gets fliped for an (even) number of times it will still have its (face down)
    Example: if n = 5
    the card will be fliped at iteration(i) = 1, 5   [up then down again]


    // SO we just have to determine whether the card will be fliped for an [odd or even] number of times
    // to solve the problem


the card gets fliped if it can be divided by i [where i is the number of iteration]
    Example: if n = 24
    the card will be fliped 8 times at i = 1, 2, 3, 4, 6, 8, 12, 24
    as fliping every second card will flip 24, and every third card will flip 24,... and so on
    and those numbers are n's [FACTORS]


    // SO we can determine if the card is face up or down
    // just by knowing the number of n's factors (number of flips) is even or odd
    // and luckily there's a rule that can determine that


by forming the multiplication facts/pairs by n's factors we can find that
    --> only perfect squares have an odd number of factors

    24 = 1*24 = 2*12 = 3*8 = 4*6             (8 factors)
    36 = 1*36 = 2*18 = 3*12 = 4*9 = 6*6      (9 factors as 6 is repeated)



    // SO finally we can say that the card's face is up if it's
    // a perfect square(has an odd number of factors) and down if it's not.



https://brainly.in/question/15254203#:~:text=be%20mentioned%20once.-,Therefore%2C%20the%20factors%20are%201%2C%202%2C%203%2C%204,does%20not%20have%20a%20pair.

 */