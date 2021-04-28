// Простой таймер с использованием sleep (windows.h)
#include <iostream>
#include <unistd.h>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int seconds;

    cout << "Enter the number of seconds:" << endl;

    cin >> seconds;

    cout << endl;
    cout << "Starting the timer..." << endl;

    for (int i = seconds; i != 0; i--)
    {
        cout << i << endl;

        sleep(1);
    }

    cout << "Time is out!\a" << endl;

    return 0;
}
