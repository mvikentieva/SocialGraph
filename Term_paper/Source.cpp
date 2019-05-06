#include <iostream>
#include <string>
#include <vector>

#include"SocialGraph.h"

using namespace std;

const string FILE_NAME = "graph_data.txt";

int main()
{
	setlocale(LC_ALL, "rus");
	Graph graph;
	cout << "Исходный граф" << endl;
	cout << endl;
	graph.createGraph(FILE_NAME);
	cout << graph << endl;
	cout << "Граф друзей" << endl;
	cout << endl;
	graph.removingDominantVertex();
	cout << graph << endl;


	cout << "\nКластеры по интересам: " << endl;


	graph.dfsTraversal(); 
	

	system("pause");

	return 0;
}
