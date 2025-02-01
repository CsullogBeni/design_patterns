#pragma once

#include <vector>

/**
 * @class Search
 * @brief Abstract base class for search algorithms.
 *
 * This class serves as an interface for different search algorithms. 
 * It declares a pure virtual method Execute which must be implemented 
 * by derived classes to perform a search operation on a given adjacency list.
 */
class Search
{
public:
    /**
     * @brief Executes the search algorithm.
     * 
     * @param adj The adjacency matrix of the graph.
     * @param start The starting node for the search.
     */
    virtual void Execute( std::vector<std::vector<int>> &adj, int start) = 0;
};
