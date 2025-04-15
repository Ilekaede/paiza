import heapq

def min_hours_to_complete(N, X, F, S):

    start_state = (0, 0, X)

    # 優先度付きキューに開始状態を登録
    pq = []
    heapq.heappush(pq, start_state)

    # 探索済みの状態を、(生産性, 書いた行数)をキーに最小時間を記録
    visited = {}

    while pq:
        t, lines, p = heapq.heappop(pq)

        # 既に N 行以上書いていれば終了
        if lines >= N:
            return t

        # 同じ生産性pについて、より多くの行を書いた状態が既に短時間で到達しているならスキップ
        key = p
        if key in visited and visited[key] >= lines:
            continue
        visited[key] = lines

        new_p = max(p - F, 0)
        new_lines = lines + p
        new_t = t + 1
        heapq.heappush(pq, (new_t, new_lines, new_p))


        new_p2 = min(p + S, X)
        new_t2 = t + 3
        heapq.heappush(pq, (new_t2, lines, new_p2))

    return -1

if __name__ == "__main__":
    N, X, F, S = map(int, input().split())
    result = min_hours_to_complete(N, X, F, S)
    print(result)
