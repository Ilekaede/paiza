#include <iostream>

using namespace std;

bool isPrime(int N)
{
    if (N < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= N; i++)
    {
        if (N % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int N;
    cin >> N;
    int sum = 0;
    for (int i = 2; i <= N; i++)
    {
        if (isPrime(i))
        {
            sum++;
        }
    }

    cout << sum << endl;
}