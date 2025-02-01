#include "BreadthFirstSearch.hpp"


void BreadthFirstSearch::Execute(std::vector<std::vector<int>> &adj, int start) {

    std::cout << "Breadth First Search: ";

    std::queue<int> q;
    std::vector<bool> visited(adj.size(), false);

    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int current = q.front();
        q.pop();
        std::cout << " " << current;
        for (int i = 0; i < adj[current].size(); i++) {
            if (!visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }

    std::cout << std::endl;
}