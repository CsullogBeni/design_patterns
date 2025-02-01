#include "Graph.hpp"
#include "BreadthFirstSearch.hpp"
#include "DepthFirstSearch.hpp"



/**
 * @brief Main function
 * 
 * This function is the entry point of the program.
 * It creates a graph, adds edges to it, and performs
 * a breadth-first search and a depth-first search.
 * The graph is then printed out showing the result
 * of the searches.
 * 
 * @return 0 if the program is successful
 */
int main(){

    Graph g(5);
    BreadthFirstSearch bfs = BreadthFirstSearch();

    g.AddEdge(0,1);
    g.AddEdge(0,2);
    g.AddEdge(1,3);
    g.AddEdge(1,4);
    g.AddEdge(2,4);

    g.Print();
    g.ExecuteSearch(&bfs, 0);

    g = Graph(6);
    DepthFirstSearch dfs = DepthFirstSearch();
    
    g.AddEdge(1,2);
    g.AddEdge(2,0);
    g.AddEdge(0,3);
    g.AddEdge(4,5);

    g.Print();
    g.ExecuteSearch(&dfs, 0);

    return 0;
}
