#include <iostream>
#include <list>
#include<vector>
#include<queue>
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

    void printBFS(int source){
        vector<bool> visited(numberOfVertex,false);
        queue<int>q;
        visited[source] = true;
        q.push(source);
        while(!q.empty()){
            int temp = q.front();
            cout << temp << " ";
            q.pop();

            for(auto x : l[temp]){
                if(visited[x] == false){
                   q.push(x);
                   visited[x] = true;
                }
            }
        }
    }

    void helperDFS(int source , vector<bool>&visited){
        visited[source] = true;
        cout << source << " ";
        for(auto it : l[source]){
            if(visited[it] == false){
                helperDFS(it ,visited);
            }
        }
        return;
    }

    void printDFS(int source){
        vector<bool> visited(numberOfVertex , false);
        helperDFS(source , visited);
    }

};

int main(){
    // cout <<  "Basic of Graph " << "\n";

    Graph g(7);
    g.addEdge(0,1);
    g.addEdge(1,2);
    g.addEdge(2,3);
    g.addEdge(3,5);
    g.addEdge(5,6);
    g.addEdge(4, 5);
    g.addEdge(0,4);
    g.addEdge(3,4);
    cout << "This is Adjanceny list \n";
    g.printGraph();
    cout << "This is Breadth First Search \n";
    g.printBFS(1);
    cout << "\nThis is Depth First Search \n";
    g.printDFS(1);
    return 0;
}
