#ifndef __SPARSE_GRAPH_H__
#define __SPARSE_GRAPH_H__
#include <vector>
#include <set>


// Your code here

using namespace std;

class SparseGraph{
public:
    SparseGraph() : SparseGraph(3) {
        // Your code here


    }

    SparseGraph(int n_in) : n(n_in), edge(n_in) {

        // Your code here
    }

    SparseGraph(const SparseGraph& G) : n(G.n), edge(G.edge){
        // Your code here


    }

    void AddEdge(int a, int b) {
        // Your code here
        edge[a].insert(b);

    }

    void RemoveEdge(int a, int b) {
        // Your code here
        edge[a].erase(b);
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        if(edge[a].count(b) >= 1) return true;
        return false;

    }

    SparseGraph Transpose() const {
        // Your code here
        SparseGraph trans(n);
        for(int i=0;i<edge.size();i++)
        for(const auto& x : edge[i]){
            trans.AddEdge(x, i);
        }
        return trans;

    }

protected:
    // Your code here
    int n;
    vector<set<int>> edge;
};
#endif // __SPARSE_GRAPH_H__

