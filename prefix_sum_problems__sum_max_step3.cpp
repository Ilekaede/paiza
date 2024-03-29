#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int N, K;
    cin >> N >> K;
    int a[N];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    int s[N + 1];
    s[0] = 0;
    s[1] = a[0];
    for (int i = 1; i < N + 1; i++)
    {
        s[i + 1] = s[i] + a[i];
    }

    int max = -1;
    for (int i = 0; i <= N - K; i++)
    {
        int n = s[i + K] - s[i];
        if (n > max)
        {
            max = n;
        }
    }

    cout << max << endl;
    return 0;
}