//
// Created by chloe on 01/06/18.
//

#ifndef PROJECT_GRAPHE_NEW_LIST_H
#define PROJECT_GRAPHE_NEW_LIST_H


#include "Graph.h"
#include <iostream>
#include <set>

class List : public Graph {
private:
    std::set<int> * neighbor;

public:
    List(const int n);

    void addEdge(const int t, const int h);
    void printGraph();

    std::vector<int> getNeighbors(const int n);
    Graph* tranpose();
    void deleteNode(const int n);
    void clearGraph();
};

#endif //PROJECT_GRAPHE_NEW_LIST_H
