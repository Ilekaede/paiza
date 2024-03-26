#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        if (i % 15 == 0)
        {
            cout << "Fizz Buzz" << endl;
            continue;
        }

        if (i % 3 == 0)
        {
            cout << "Fizz" << endl;
            continue;
        }
        else if (i % 5 == 0)
        {
            cout << "Buzz" << endl;
            continue;
        }

        cout << i << endl;
    }
}
