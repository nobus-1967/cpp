#include <iostream>

int main()
{
    int numbers[100];

    for (int i = 0; i < 100; i++)
        numbers[i] = i + 1;

    std::cout << "FizzBuzz test:";

    for (int i = 0; i < 100; i++)
    {
        if (numbers[i] % 15 == 0)
            std::cout << std::endl
                      << "FizzBuzz";
        else if (numbers[i] % 3 == 0)
            std::cout << std::endl
                      << "Fizz";
        else if (numbers[i] % 5 == 0)
            std::cout << std::endl
                      << "Buzz";
        else
            std::cout << std::endl
                      << numbers[i];
    }
    std::cout << std::endl;

    return 0;
}
