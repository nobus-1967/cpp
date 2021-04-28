#include <iostream>

int main() 
{
    int data[100];

    for (int i = 0; i < 100; i++)
        data[i] = i + 1;

    std::cout << "FizzBuzz test:";

    for (int i = 0; i < 100; i++)
    {
        if (*(data + i) % 15 == 0)
            std::cout << std::endl << "FizzBuzz";
        else if (*(data + i) % 3 == 0)
            std::cout << std::endl << "Fizz";
        else if (*(data + i) % 5 == 0)
            std::cout << std::endl << "Buzz";
        else 
            std::cout << std::endl << *(data + i);
    }
    std::cout << std::endl;

    return 0;
}
