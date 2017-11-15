#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <vector>

using namespace std;

class Vertex;
class Edge;
class Graph;

class Edge
{
    public:
        Edge(Vertex *org, Vertex *dest, int dist)
        {
            origin = org;
            destination = dest;
            distance = dist;
        }

        Vertex* getOrigin()
        {
            return origin;
        }

        Vertex* getDestination()
        {
            return destination;
        }

        int getDistance()
        {
            return distance;
        }

    private:
        Vertex *origin, *destination;
        int distance;
};

class Vertex
{
    public:
        Vertex(int id)
        {
            name = id;
        }

        void addEdge(Vertex *v, int dist)
        {
            Edge newEdge(this, v, dist);
            edges.push_back(newEdge);
        }

        void printEdges()
        {
            cout << name << ":" << endl;
            for (int i = 0; i < edges.size(); i++)
            {
            Edge e = edges[i];
            cout << e.getDestination()->getName() <<
                " - " << e.getDistance() << endl;
            }
            cout << endl;
        }

        int getName()
        {
            return name;
        }

        vector<Edge> getEdges()
        {
            return edges;
        }

        int getID();
        void setID(int value);

    private:
        int name, ID;
        vector<Edge> edges;
};

class Graph
{
    public:
        Graph() {
            this->contInserts = 0;
        }

        void insert(Vertex *v)
        {
            v->setID(contInserts++);
            vertices.push_back(v);
        }

        void printGraph()
        {
            for (int i = 0; i < vertices.size(); i++)
                vertices[i]->printEdges();
        }

        //ListaSimple* todosLosCaminos(Vertex*, Vertex*);

    private:
        int contInserts;
        vector<Vertex*> vertices;
        //ListaSimple* todosLosCaminos_aux(int**,Vertex*, Vertex*);
        int** buildMatrix();
};

#endif // GRAPH_H
