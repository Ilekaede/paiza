# 入力値取得
N, V = map(int,input().split())
    
# mi(品物の個数)を分解した後の、v(価値)とw(重さ)を入れるリストを作る
L = []
for _ in range(N):
  v, w, m = map(int,input().split())
  k = 1
  while m > 0:
    L.append([v*k, w*k])
    m -= k
    k = min(2*k, m)

# DP表作成(一次元)
dp=[0] * (V+1)

for v, w in L:
  for j in range(V, w-1, -1):
    dp[j]=max(dp[j], dp[j-w]+v)
print(dp[V])
