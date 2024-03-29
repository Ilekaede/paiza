#include <iostream>
#include <string>

using namespace std;
int main()
{
    string str = "bwwbwbbwbwbb";
    int b[12];
    for (int i = 0; i < str.length(); i++)
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

    int s[13];
    s[0] = 0;
    s[1] = b[0];
    for (int i = 1; i < 12; i++)
    {
        s[i + 1] = s[i] + b[i];
    }

    cout << s[8] - s[2] << endl;
    return 0;
}