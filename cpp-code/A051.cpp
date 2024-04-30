#include <iostream>
#include <vector>

using namespace std;

int main(){
    int H, W; cin >> H >> W;
    vector< vector<int> > s(H, vector<int>(W));
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cin >> s[i][j];
        }
    }
    int sum = 0;
    int ans = -1;
    for(int j = 0; j < W; j++){
        int y = 0;
        int x = j;
        sum = s[y][x]; //スタートの値
        while(y != H - 1){
            if(x == 0){
                sum += max(s[y + 1][x], s[y + 1][x + 1]);
                if(s[y + 1][x] <= s[y + 1][x + 1]){
                    x++;
                }
            }
            else if(x == W - 1){
                sum += max(s[y + 1][x], s[y + 1][x - 1]);
                if(s[y + 1][x] <= s[y + 1][x - 1]){
                    x--;
                }
            }
            else{
                sum += max(s[y + 1][x], max(s[y + 1][x - 1], s[y + 1][x + 1]));
                if(s[y + 1][x] < max(s[y + 1][x - 1] , s[y + 1][x + 1]) && s[y + 1][x - 1] < s[y + 1][x + 1]){
                    x++;
                }
                else{
                    x--;
                }
            }
            y++;
        }
        ans = max(ans, sum);
    }
    cout << ans << endl;

    return 0;

}