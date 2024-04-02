#include <iostream>

using namespace std;
int main()
{
    int X, Y;
    cin >> X >> Y;
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    int b[10];
    for (int i = 0; i < 10; i++)
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

    int s[11];
    s[0] = 0;
    s[1] = b[0];
    for (int i = 1; i < 10; i++)
    {
        s[i + 1] = s[i] + b[i];
    }

    cout << s[Y + 1] - s[X] << endl;

    return 0;
}