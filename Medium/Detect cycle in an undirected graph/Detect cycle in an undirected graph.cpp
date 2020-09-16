#include<bits/stdc++.h>
using namespace std;
/*
Para cada vértice visitado 'v', 
se houver um 'u' adjacente tal que u já foi visitado e u 
não é pai de v, então há um ciclo no gráfico. 
Se não encontrarmos tal adjacente para nenhum vértice, 
dizemos que não há ciclo.
*/
bool DFSUtil(vector<int> adj[], int u, vector<bool> &visited, int parent)
{
   visited[u]=true;                 // Marca o no como visitado
   for(auto v: adj[u])              //Executa para toodos os nos adjacentes daquele vertice
   {                    
       if(!visited[v])              // Se o vertice nao esta visitado
       {
           if(DFSUtil(adj, v, visited, u))  //Executa uma DFS para o vertice adjacente
            return true;                    
       }
       else if(v!=parent)                   
            return true;            
   }
   return false;
}

bool isCyclic(vector<int> adj[], int V)
{
   vector<bool> visited(V, false);  // Crea um vetor de visitado todos como false(nao visitado)
   for(int u=0; u<V; u++)             // Atravessando cada nó
   {
       if(!visited[u])              // Se o vértice ainda não foi visitado
          if(DFSUtil(adj, u, visited, -1)) // chama a DFS naquele vertice
            return true;                // Se a funcao contem um ciclo retorne true
   }
   return false;                        // Senao retorne false
}

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int V, E;
        cin>>V>>E;
        
        // array de vetores representando o grafo
        vector<int> adj[V];
        
        int u, v;
        for(int i=0;i<E;i++)
        {
            cin>>u>>v;
            
            // adcionando aresta no grafo
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        cout << isCyclic(adj, V)<<endl;

    }
}
