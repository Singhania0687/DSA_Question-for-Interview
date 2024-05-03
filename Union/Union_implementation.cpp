#include <vector>
# include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    DisjointSet ds(n);
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        ds.Union(x,y);
    }
    int q;
    cin>>q;
    while(q--)
    {
        int x,y;
        cin>>x>>y;
        if(ds.find(x)==ds.find(y))
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
class DisjointSet {
private:
    std::vector<int> parent;
    std::vector<int> rank;

public:
    DisjointSet(int size) {
        parent.resize(size);
        rank.resize(size, 0);
        for (int i = 0; i < size; ++i) {
            parent[i] = i; // Initialize each element as its own parent
        }
    }

    // Find operation (with path compression)
    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]); // Path compression
        }
        return parent[x];
    }

    // Union operation (with rank optimization)
    void Union(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);
        if (rootX == rootY) return; // Already in the same set

        // Union by rank to maintain balanced trees
        if (rank[rootX] < rank[rootY]) {
            parent[rootX] = rootY;
        } else if (rank[rootX] > rank[rootY]) {
            parent[rootY] = rootX;
        } else {
            parent[rootY] = rootX;
            rank[rootX]++;
        }
    }
};
