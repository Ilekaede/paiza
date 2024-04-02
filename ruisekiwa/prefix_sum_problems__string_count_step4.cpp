#include <iostream>
#include <string>

using namespace std;
int main()
{
    int N, X, Y;
    cin >> N >> X >> Y;
    string str;
    cin >> str;
    int b[N];
    for (int i = 0; i < N; i++)
    {
        if (str[i] == 'b')
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

    cout << s[Y] - s[X - 1] << endl;
    return 0;
}