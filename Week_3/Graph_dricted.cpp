#include <iostream>
using namespace std;

class Graph {
    int V;
    int** adj; 

public:
    Graph(int V);
    ~Graph();
    void addEdge(int v, int w);
    void printGraph();
};

Graph::Graph(int V) {
    this->V = V;
    adj = new int*[V];
    for (int i = 0; i < V; ++i) {
        adj[i] = new int[V];
        for (int j = 0; j < V; ++j) {
            adj[i][j] = 0;
        }
    }
}

Graph::~Graph() {
    for (int i = 0; i < V; ++i) {
        delete[] adj[i];
    }
    delete[] adj;
}

void Graph::addEdge(int v, int w) {
    adj[v][w] = 1;
    adj[w][v] = 1; 
}

void Graph::printGraph() {
    for (int i = 0; i < V; ++i) {
        cout << "\n Adjacency matrix row " << i << ": ";
        for (int j = 0; j < V; ++j) {
            cout << adj[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    int V = 7; 
    Graph g(V);

    int edges;
    cout << "Enter the number of edges: ";
    cin >> edges;

    cout << "Enter the edges (format: u v):" << endl;
    for (int i = 0; i < edges; ++i) {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v);
    }

    g.printGraph();

    return 0;
}