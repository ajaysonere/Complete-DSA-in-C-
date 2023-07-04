#include <iostream>
#include <list>
using namespace std;

class Graph{
    int numberOfVertex;
    list<int>*l;
    public:
    Graph(int numberOfVertex){
        this->numberOfVertex = numberOfVertex;
        l = new list<int>[numberOfVertex];
    }
    
    void addEdge(int i, int j, bool undir = true){
        l[i].push_back(j);
        if(undir){
           l[j].push_back(i);
        }
    }

    void printGraph(){
        for(int i=0; i<numberOfVertex; i++){
            cout << i << " -> ";
            for(auto node : l[i]){
                cout << node << " ";
            }
            cout << "\n";
        }
    }

};

int main(){
    // cout <<  "Basic of Graph " << "\n";

    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(3 , 4);
    g.addEdge(4 , 5);
    g.addEdge(0,4);
    g.addEdge(3, 5);
    g.addEdge(2,1);
    g.printGraph();
    return 0;
}
