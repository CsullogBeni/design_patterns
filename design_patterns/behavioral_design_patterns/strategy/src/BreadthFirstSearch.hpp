#pragma once

#include <iostream>
#include <vector>
#include <queue>
#include "Search.hpp"


/**
 * @class BreadthFirstSearch
 * @brief Concrete search algorithm class that implements breadth-first search.
 *
 * This class is a concrete search algorithm class that implements the breadth-first search
 * algorithm. It implements the Search interface and provides a method to execute the
 * search algorithm on a given adjacency list.
 */
class BreadthFirstSearch : public Search
{
public:
    /**
     * @brief Executes the search algorithm on the given adjacency list.
     * @param adj The adjacency list of the graph.
     * @param start The starting node for the search.
     */
    void Execute(std::vector<std::vector<int>> &adj, int start) override;
};
