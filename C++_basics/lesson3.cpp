#include <iostream>

int main()
{

    // type casting
    // 1. implicit casting
    char a = 'a';
    int b = a;

    std::cout << a;

    // 2. explicit casting

    double d = 100.99;
    int c = (int)d;
    std::cout << c;

    // Operators
    // 1.Airthmetic operator
    int a = 1;
    int b = 2;
    int sum = a + b;
    std::cout << sum << std::endl;
    // 2.Relational operator
    bool result = a > b;
    std::cout << result << std::endl;
    // 3.Logical operator
    // and -> &&
    // or -> ||
    // not -> !

    // 4. unary operator
    // 1.Increment
    int a = 1;
    int c = a++; //value of a will be 1 later update
    int c = ++a; //value of a will be updated 
    // 2.Decrement
    int a = 1;
    int c = a--;
    int c = --a;

    return 0;
}