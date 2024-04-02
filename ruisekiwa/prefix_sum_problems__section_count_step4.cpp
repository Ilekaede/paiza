#include <iostream>

using namespace std;
int main()
{
    int N, X, Y;
    cin >> N >> X >> Y;
    int a[N];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    int b[N];
    for (int i = 0; i < N; i++)
    {
        if (a[i] % 2 == 0)
        {
            b[i] = 1;
        }
        else
        {
            b[i] = 0;
        }
    }

    int s[N + 1];
    s[0] = 0;
    s[1] = b[0];
    for (int i = 1; i < N; i++)
    {
        s[i + 1] = s[i] + b[i];
    }

    cout << s[Y + 1] - s[X] << endl;

    return 0;
}