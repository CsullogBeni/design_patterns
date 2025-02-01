#include "DepthFirstSearch.hpp"

void DepthFirstSearch::Execute(std::vector<std::vector<int>> &adj, int start) 
{
    std::cout << "Depth First Search:";

    std::vector<bool> visited(adj.size(), false);
    for (int i = 0; i < adj.size(); i++){
        if (!visited[i]) {
            DFSRec(adj, visited, i);
        }
    }
    std::cout << std::endl;
}

void DepthFirstSearch::DFSRec(std::vector<std::vector<int>> &adj, std::vector<bool> &visited, int start) 
{
    visited[start] = true;
    std::cout << " " << start;
    for (int i : adj[start]) 
    {
        if (!visited[i]) 
        {
            DFSRec(adj, visited, i);
        }
    }
}
