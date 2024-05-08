#include <iostream>
#include <vector>

using namespace std;
int main(){
    int N, A, B; cin >> N >> A >> B;
    vector<int> dp(N + 1);
    for(int i = 0; i < N + 1; i++){
        dp[i] = 0;
    }
    dp[0] = 1;
    dp[A] = 1;
    dp[B] = 1;
    for(int i = A; i <= N; i++){
        if(i + A > N){
            dp[N] = 1;
            break;
        }

        if(dp[i] == 1){
            dp[i + A] = 1;
            dp[i + B] = 1;
        }
    }
    int ans = 0;
    for(int i = 0; i < N + 1; i++){
        if(dp[i] == 0){
            ans++;
        }
    }
    cout << ans << endl;

    return 0;
}