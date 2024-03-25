#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int sum = 0;
    int log_n = (int)(log2(N));
    for (int i = 1; i <= log_n; i++)
    {
        int factorial2 = (int)(pow(2, i));
        sum += N / factorial2;
    }

    cout << sum << endl;

    return 0;
}