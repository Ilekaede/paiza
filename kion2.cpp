#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int min = 100;
    int max = -30;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x < min)
            min = x;
        if (x > max)
            max = x;
    }

    cout << abs(max - min) << endl;

    return 0;
}