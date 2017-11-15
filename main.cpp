#include "mainwindow.h"
#include <QApplication>

#include "graph.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //w.show();


        Graph *g = new Graph();

        Vertex *v1 = new Vertex(3);
        Vertex *v2 = new Vertex(2);
        Vertex *v3 = new Vertex(6);
        Vertex *v4 = new Vertex(8);
        Vertex *v5 = new Vertex(5);
        Vertex *v6 = new Vertex(9);
        Vertex *v7 = new Vertex(1);
        Vertex *v8 = new Vertex(7);



        v1->addEdge(v1, 100);
        v1->addEdge(v6, 20);

        v2->addEdge(v1, 100);

        v3->addEdge(v1, 30);
        v3->addEdge(v4, 10);
        v3->addEdge(v7, 20);

        v4->addEdge(v5, 15);

        v5->addEdge(v1, 10);

        v6->addEdge(v1, 20);

        v8->addEdge(v7, 45);


        g->insert(v1);
        g->insert(v2);
        g->insert(v3);
        g->insert(v4);
        g->insert(v5);
        g->insert(v6);
        g->insert(v7);
        g->insert(v8);

        g->printGraph();


    return a.exec();
}
