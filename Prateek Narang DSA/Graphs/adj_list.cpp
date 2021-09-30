#include<iostream>
#include<list>
using namespace std;

class Graph{
    int V;
    list<int> *l; // Pointer to an array of list 

    // Dynamic Memory allocation
    public:
    // Let's define a constructor with number of vertices 

    Graph(int v){
        V=v;
        l= new list<int> [V]; // For creating V no of linkedlists
    }
    void addEdge(int i,int j,bool undir=true){
        l[i].push_back(j);
        // IF undir is true then reverse is also true 
        if(undir){
            l[j].push_back(i);
        }
    }
    // PRINT ADJ List
    void printAdjList(){
        // Iterate over all the rows
        for(int i=0;i<V;i++){
            // Every element in the ith linked list
            for(auto node: l[i]){
                cout<<node<<",";
                }
                cout<<endl;
        }
    }
};
int main(){
    Graph g(6);
    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(2,1);
    g.addEdge(3,4);
    g.addEdge(4,5);
    g.addEdge(2,3);
    g.addEdge(3,5);
    return 0;
}

