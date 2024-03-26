#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int l, r, sum;
    for (int i = 0; i < K; i++)
    {
        sum = 0;
        cin >> l >> r;
        for (int j = l - 1; j < r; j++)
        {
            sum += A[j];
        }
        cout << sum << endl;
    }

    return 0;
}