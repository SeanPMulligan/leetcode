// DFS algorithm in C++

#include <iostream>
#include <list>

class Graph {
  int numVertices;
  std::list<int> *adjLists;
  bool *visited;

  public:
    Graph(int V);
    ~Graph();
    void addEdge(int src, int dest);
    void DFS(int vertex);
};

// Initialize graph
Graph::Graph(int vertices) {
  numVertices = vertices;
  adjLists = new std::list<int>[vertices];
  visited = new bool[vertices];
}

Graph::~Graph() {
  // deallocate memory
  delete[] adjLists;
  delete[] visited;
}

// Add edges
void Graph::addEdge(int src, int dest) {
  adjLists[src].push_front(dest);
}

// DFS algorithm
void Graph::DFS(int vertex) {
  visited[vertex] = true;
  std::list<int> adjList = adjLists[vertex];

  std::cout << vertex << " ";

  std::list<int>::iterator i;
  for (i = adjList.begin(); i != adjList.end(); i++) {
    if (!visited[*i]) DFS(*i);
  }
}

int main() {
  Graph g(4);
  g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(1, 2);
  g.addEdge(2, 3);

  g.DFS(0);

  return 0;
}
