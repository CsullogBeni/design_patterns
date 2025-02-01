#pragma once

#include <iostream>
#include <vector>
#include "Search.hpp"


/**
 * @class DepthFirstSearch
 * @brief Concrete search algorithm class that implements depth-first search.
 *
 * This class is a concrete search algorithm class that implements the depth-first search
 * algorithm. It inherits from the Search interface and provides a method to execute the
 * search algorithm on a given adjacency list.
 */
class DepthFirstSearch : public Search
{
private:
    /**
     * @brief Recursive helper function for depth-first search.
     * 
     * @param adj The adjacency list of the graph.
     * @param visited A vector to keep track of visited nodes.
     * @param start The starting node for the search.
     */
    void DFSRec(std::vector<std::vector<int>> &adj, std::vector<bool> &visited, int start);

public:
    /**
     * @brief Executes the depth-first search algorithm on the given adjacency list.
     * 
     * @param adj The adjacency list of the graph.
     * @param start The starting node for the search.
     */
    void Execute(std::vector<std::vector<int>> &adj, int start) override;
};
