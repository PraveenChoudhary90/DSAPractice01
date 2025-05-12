#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int dominoFallCount(int N, int M, vector<pair<int, int>>& edges, vector<int>& initial) {
    vector<vector<int>> graph(N + 1);
    vector<bool> visited(N + 1, false);

    // Build the graph
    for (auto& edge : edges) {
        int a = edge.first;
        int b = edge.second;
        graph[a].push_back(b);
    }

    queue<int> q;
    // Add initially pushed dominos to the queue
    for (int start : initial) {
        if (!visited[start]) {
            visited[start] = true;
            q.push(start);
        }
    }

    int count = 0;

    // BFS traversal
    while (!q.empty()) {
        int current = q.front();
        q.pop();
        count++;

        for (int neighbor : graph[current]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

    return count;
}

int main() {
    int N, M;
    cin >> N >> M;

    vector<pair<int, int>> edges(M);
    for (int i = 0; i < M; ++i) {
        int a, b;
        cin >> a >> b;
        edges[i] = {a, b};
    }

    int K;
    cin >> K;
    vector<int> initial(K);
    for (int i = 0; i < K; ++i) {
        cin >> initial[i];
    }

    cout << dominoFallCount(N, M, edges, initial) << endl;

    return 0;
}
