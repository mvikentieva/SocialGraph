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
	cout << "�������� ����" << endl;
	cout << endl;
	graph.createGraph(FILE_NAME);
	cout << graph << endl;
	cout << "���� ������" << endl;
	cout << endl;
	graph.removingDominantVertex();
	cout << graph << endl;


	cout << "\n�������� �� ���������: " << endl;


	graph.dfsTraversal(); 
	

	system("pause");

	return 0;
}
