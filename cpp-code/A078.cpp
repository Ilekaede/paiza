#include <iostream>
#include <vector>
#include <tuple>
#include <set>

using namespace std;
int main(){
    int H; cin >> H;
    vector<string> S(H);
    for(int i = 0; i < H; i++){
        for(int j = 0; j < 5; j++){
            cin >> S[i][j];
        }
    }

    set< tuple <int, int> > st;
    bool flag = true;

    while(flag){
        for(int i = 0; i < H; i++){
            for(int j = 0; j < 5; j++){
                if(S[i][j] == '.'){
                    continue;
                }
                else{
                    if(i == 0 && j == 0){// 左上
                        if(S[i][j] == S[i+1][j] && S[i][j] == S[i][j+1]){
                            st.insert(make_tuple(i, j));
                        }
                    }
                    else if(i == 0 && j == 4) {// 右上
                        if(S[i][j] == S[i+1][j] && S[i][j] == S[i][j-1]){
                            st.insert(make_tuple(i, j));
                        }
                    }
                    else if(i == H - 1 && j == 0){ // 左下
                        if(S[i][j] == S[i-1][j] && S[i][j] == S[i][j+1]){
                            st.insert(make_tuple(i, j));
                        }
                    }
                    else if(i == H - 1 && j == 4){ // 右下
                        if(S[i][j] == S[i-1][j] && S[i][j] == S[i][j-1]){
                            st.insert(make_tuple(i, j));
                        }
                    }
                    else if(i == 0 && j != 0 && j != 4){ // 一番上
                        if(S[i][j] == S[i+1][j] && S[i][j] == S[i][j-1] && S[i][j] == S[i][j+1]){ //下,左,右
                            st.insert(make_tuple(i, j));
                        }
                    }
                    else if(i == H - 1 && j != 0 && j != 4){ // 一番下
                        if(S[i][j] == S[i-1][j] && S[i][j] == S[i][j-1] && S[i][j] == S[i][j+1]){ //上,左,右
                            st.insert(make_tuple(i, j));
                        }
                    }
                    else if(j == 0 && i != 0 && i != H - 1){ //一番左
                        if(S[i][j] == S[i - 1][j] && S[i][j] == S[i][j + 1] && S[i][j] == S[i + 1][j]){ // 上，右，下
                            st.insert(make_tuple(i, j));
                        }
                    }
                    else if(j == 4 && i != 0 && i != H - 1){ //一番右
                        if(S[i][j] == S[i - 1][j] && S[i][j] == S[i][j - 1] && S[i][j] == S[i + 1][j]){ //上，左，下
                            st.insert(make_tuple(i, j));
                        }
                    }
                    else{ // 端でないところ
                        if(S[i][j] == S[i - 1][j] && S[i][j] == S[i][j - 1] && S[i][j] == S[i + 1][j] && S[i][j] == S[i][j + 1]){
                            st.insert(make_tuple(i, j));
                        }
                    }
                }
            }
        }

        if(st.empty()){
            flag = false;
        }

        // // 数字ブロックの削除処理
        for(auto value: st){
            int p = get<0>(value);
            int q = get<1>(value);
            if(p == 0 && q == 0){// 左上
                    S[p][q] = '.';
                    S[p][q+1] = '.';
                    S[p+1][q] = '.';
            }
            else if(p == 0 && q == 4) {// 右上
                    S[p][q] = '.';
                    S[p][q-1] = '.';
                    S[p+1][q] = '.';
            }
            else if(p == H - 1 && q == 0){ // 左下
                    S[p][q] = '.';
                    S[p-1][q] = '.';
                    S[p][q+1] = '.';
            }
            else if(p == H - 1 && q == 4){ // 右下
                    S[p][q] = '.';
                    S[p-1][q] = '.';
                    S[p][q-1] = '.';
            }
            else if(p == 0 && q != 0 && q != 4){ // 一番上
                    S[p][q] = '.';
                    S[p+1][q] = '.';
                    S[p][q-1] = '.';
                    S[p][q+1] = '.';
            }
            else if(p == H - 1 && q != 0 && q != 4){ // 一番下
                    S[p][q] = '.';
                    S[p-1][q] = '.';
                    S[p][q-1] = '.';
                    S[p][q+1] = '.';
            }
            else if(q == 0 && p != 0 && p != H - 1){ //一番左
                    S[p][q] = '.';
                    S[p - 1][q] = '.';
                    S[p][q + 1] = '.';
                    S[p + 1][q] = '.';
            }
            else if(q == 4 && p != 0 && p != H - 1){ //一番右
                        S[p][q] = '.';
                        S[p - 1][q] = '.';
                        S[p][q - 1] = '.';
                        S[p + 1][q] = '.';
            }
            else{ // 端でないところ
                        S[p][q] = '.';
                        S[p - 1][q] = '.';
                        S[p][q - 1] = '.';
                        S[p + 1][q] = '.';
                        S[p][q + 1] = '.';
            }
        }
        st.clear();

        // // ブロックを下に下げる作業．
        for(int i = H - 2; i >= 0; i--){ // 下から2段目
            for(int j = 4; j >= 0; j--){
                if(S[i][j] == '.'){
                    continue;
                }
                else{
                    int y = i;
                    int x = j;
                    bool moveFlag = true;
                    while(moveFlag){
                        if(y == H - 1){
                            moveFlag = false;
                            continue;
                        }
                        else{
                            if(S[y + 1][x] == '.'){
                                S[y + 1][x] = S[y][x];
                                S[y][x] = '.';
                                y++;

                            }
                            else{
                                moveFlag = false;
                            }
                        }
                    }
                }
            }
        }
    }

    for(int i = 0; i < H; i++){
        for(int j = 0; j < 5; j++){
            cout << S[i][j];
        }
        cout << endl;
    }

    return 0;

}