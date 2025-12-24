#include <iostream>

int add_numbers(int first_num, int second_num);

int main()
{
    // some data types
    char character = 'A';
    std::string phrase = "hello";
    double grade = 89.63;
    bool agree = false;

    int num_1 = 35;

    // special way to assign a value to the variable
    int num_2{27};

    int sum = add_numbers(num_1, num_2);
    std::cout << "sum: " << sum << std::endl;

    return 0;
}

int add_numbers(int first_num, int second_num)
{
    return first_num + second_num;
}

/*
The main point of namespces is so that when you #include a library,
its function names won't clash with other libraries that you #include.
So everything from the library is in the namespace of that library.
Otherwise, you may have trouble using two different libraries that
use the same function name
*/