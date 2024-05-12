#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
class Graph
{
private:
    vector<string> nodes;
    int **graph;
    int nodeCount;
private:
    int getIndex(const string &v)
    {
        vector<string>::iterator it=find(nodes.begin(),nodes.end(),v);
        if(it!=nodes.end())
        {
            return distance(nodes.begin(),it);
        }
        return -1;
    }
public:Graph(int maxNode)
       {
          nodeCount=0;
          graph=new int*[maxNode];
          for(int i=0;i<maxNode;i++)
          {
            graph[i]=new int[maxNode];
          }
          for(int i=0;i<maxNode;i++)
          {
            for(int j=0;j<maxNode;j++)
            {
            graph[i][j]=0;
            }
          }

      }
      void ADD_NODE(const string &v)
      {

         if(find(nodes.begin(),nodes.end(),v)!=nodes.end()){
        cout<<v<<" is already present "<<endl;
         }
        else
        {
        nodes.push_back(v);
        nodeCount++;
        }
      }
void ADD_EDGE(const string&v1,const string&v2)
{
 int index1=getIndex(v1);
 int index2=getIndex(v2);
 if(index1==-1  ||  index2 == -1)
 {
     cout<<"one or both vertices are not present in the graph";
 }
 else{
    graph[index1][index2]=1;
    graph[index2][index1]=1;
 }
}
void ADD_WEIGHTED_EDGE(const string&v1,const string&v2,int weight)
{
  int index1=getIndex(v1);
 int index2=getIndex(v2);
 if(index1==-1  ||  index2 == -1)
 {
     cout<<"one or both vertices are not present in the graph";
 }
 else{
    graph[index1][index2]=weight;
    graph[index2][index1]=weight;
 }
}
void PRINT_GRAPH()
{
cout<<"\t";
  for(int i=0;i<nodeCount;i++)
  {
      cout<<nodes[i]<<"\t";
  }
  cout<<"\n";
  for(int i=0;i<nodeCount;i++)
  {
      cout<<nodes[i]<<"\t";
      for(int j=0;j<nodeCount;j++)
      {
          cout<<graph[i][j]<<"\t";
      }
      cout<<endl;
  }
}
  void delete_Node(const string&v)
  {
      int index=getIndex(v);
      if(index==-1)
      {
          cout<<v<<" is not present in the graph";
      }
      else{
        nodes.erase(nodes.begin()+index);
        delete[] graph[index];
        for(int i=index;i<nodeCount-1;i++)
        {
            graph[i]=graph[i+1];
        }
        nodeCount--;
      }

  }
};

int main()
{
    Graph obj(10);
    int choice;
    string v1,v2;
    int weight;
     while(1)
    {
      cout<<"\n1.add a node\n";
      cout<<"2.add an edge\n";
      cout<<"3.add a weighted edge(undirected)\n";
      cout<<"4.print graph\n";
      cout<<"5.delete a node\n";
      cout<<"6.exit\n";
      cout<<"enter your choice:";
      int choice;
      cin>>choice;
      switch(choice)
      {
          case 1:cout<<"Enter vertex: ";
                 cin>>v1;
                 obj.ADD_NODE(v1);
                 break;
          case 2:cout<<"enter vertex v1:";
                 cin>>v1;
                 cout<<"enter vertex v2:";
                 cin>>v2;
                 obj.ADD_EDGE(v1,v2);
                 break;
          case 3:cout<<"enter vertex v1:";
                 cin>>v1;
                 cout<<"enter vertex v2:";
                 cin>>v2;
                 cout<<"enter weight:";
                 cin>>weight;
                 obj.ADD_WEIGHTED_EDGE(v1,v2,weight);
                 break;
          case 4:obj.PRINT_GRAPH();
                 break;
          case 5:cout<<"add a node and vertex to delete:";
                 cin>>v1;
                 obj.delete_Node(v1);
                 break;
          case 6:exit(0);
                 break;
          default:
               cout<<"\n invalid choice \n";

      }
    }
    return 0;
}
