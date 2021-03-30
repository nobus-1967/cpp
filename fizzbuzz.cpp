#include <iostream>
using namespace std;

int main() 
{
    int data[100];

    for (int i = 0; i < 100; ++i)
        data[i] = i + 1;

    cout << "FizzBuzz test:";

    for (int i = 0; i < 100; ++i)
    {
        if (*(data + i) % 15 == 0)
            cout << endl << "FizzBuzz";
        else if (*(data + i) % 3 == 0)
            cout << endl << "Fizz";
        else if (*(data + i) % 5 == 0)
            cout << endl << "Buzz";
        else 
            cout << endl << *(data + i);
    }
    cout << endl;

    return 0;
}
