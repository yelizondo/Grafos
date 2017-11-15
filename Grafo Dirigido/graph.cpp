#include "graph.h"

int** Graph::buildMatrix()
{
    int** matrix = new int*[this->contInserts];

    for (int i = 0; i < this->contInserts; i++)
    {
        matrix[i] = new int[this->contInserts];

        for(int j = 0; j < this->contInserts; j++)
        {
            matrix[i][j] = 0;
        }
    }
    // fill matrix with real stuff

    for (int i = 0; i < vertices.size(); i++)
    {
        for (int j = 0; j < vertices.at(i)->getEdges().size(); j++)
        {
            matrix[vertices.at(i)->getEdges().at(j).getOrigin()->getID()][vertices.at(i)->getEdges().at(j).getDestination()->getID()] = 1;
        }
    }
/*
    for (int i = 0; i < contInserts; i++)
    {
        for (int j = 0; j < contInserts; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
*/

    return matrix;
}
/*
ListaSimple* Graph::todosLosCaminos(Vertex *pA, Vertex *pB)
{
    todosLosCaminos_aux(buildMatrix(), pA, pB);
}

ListaSimple* Graph::todosLosCaminos_aux(int** pMatrix, Vertex *pA, Vertex *pB)
{

}
*/

int Vertex::getID()
{
    return this->ID;
}

void Vertex::setID(int value)
{
    ID = value;
}
