#include "SocialGraph.h"


void Graph::clearGraph()
{
	for (int i = 0; i < maxVertices; ++i) {
		delete matrix[i];
		matrix[i] = new int[maxVertices]();
	}
	numOfVertices = 0;
}


void Graph::removingDominantVertex()
{
	for (int i = 0; i < numOfVertices; i++) {
		int counter = 0;
		for (int j = 0; j < numOfVertices; j++) {
			if (matrix[i][j] == 1 && i!=j) {
				        counter++;
				if (counter == numOfVertices - 1) {
					for (int k = 0; k < numOfVertices; k++)
					{
						matrix[i][k] = 0;
						matrix[k][i] = 0;
					}
				}
			}
		}
	}
}


void Graph::dfsTraversal() const
{
	matrix;
	numOfVertices;
	vertices;
	bool* visited = new bool[numOfVertices]();
	
	
	for (int i = 0; i < numOfVertices; i++) {
		visited[i] = false;
	}

	stack<int> stack;

	for (int i = 0; i < numOfVertices; i++) {
		if (!visited[i]) {
			visited[i] = true;
			stack.push(i);
			cout << "Ãðóïïà: "<< endl;
			while (!stack.empty()) {
				int vertex = stack.top();
				stack.pop();
				for (int j = 0; j < numOfVertices; j++) {
					if (matrix[vertex][j] == 1 && !visited[j]) {
						cout << vertices[j];
						stack.push(j);
						visited[j] = true;
					}
				}
			}
			cout<< vertices[i] << endl;
		}
	}
	cout << endl;
}
