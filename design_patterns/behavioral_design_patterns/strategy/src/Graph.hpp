#pragma once

#include <iostream>
#include <vector>
#include "Search.hpp"


/**
 * @class Graph
 * @brief Represents a graph using an adjacency matrix.
 *
 * This class provides methods to construct a graph, add edges between nodes,
 * print the adjacency matrix, and execute a search algorithm.
 */
class Graph 
{
private:
    ///< The adjacency matrix representing the graph.
    std::vector<std::vector<int>> adjacencyMatrix; 

public:
    /**
     * @brief Constructs a graph with a given number of nodes.
     * 
     * @param size The number of nodes in the graph.
     */
    Graph(size_t size);

    /**
     * @brief Adds an edge between two nodes in the graph.
     * 
     * @param u The first node.
     * @param v The second node.
     */
    void AddEdge(int u, int v);

    /**
     * @brief Prints the adjacency matrix of the graph.
     */
    void Print() const;

    /**
     * @brief Executes a search algorithm on the graph.
     * 
     * @param search The search algorithm to execute.
     * @param start The starting node for the search.
     */
    void const ExecuteSearch(Search* search, int start);
};
