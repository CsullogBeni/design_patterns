#include "Graph.hpp"

Graph::Graph(size_t size) 
{
    adjacencyMatrix = std::vector<std::vector<int>>(size, std::vector<int>(size, 0));
}

void Graph::AddEdge(int u, int v)
{
    adjacencyMatrix[u][v] = 1;
    adjacencyMatrix[v][u] = 1;
}

void Graph::Print() const
{
    std::cout << "Adjacency matrix:" << std::endl;
    for (int i = 0; i < adjacencyMatrix.size(); i++)
    {
        for (int j = 0; j < adjacencyMatrix.size(); j++)
        {
            std::cout << adjacencyMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}


void const Graph::ExecuteSearch(Search* search, int start)
{
    search->Execute(adjacencyMatrix, start);
}
