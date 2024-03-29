#include <iostream>

using namespace std;
int main()
{
    int a[10] = {1, 5, 9, 7, 5, 3, 2, 5, 8, 4};
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

    cout << s[8] - s[2] << endl;

    return 0;
}