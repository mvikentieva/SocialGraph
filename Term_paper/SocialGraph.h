#pragma once

#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
#include <stack>

using namespace std;

const int MAX_VERTICES = 20;

class Graph
{
	friend ostream& operator<<(ostream& out, const Graph& g);

public:
	Graph();
	~Graph();
	void createGraph(const string& fileName);
	void clearGraph();
	
	void dfsTraversal() const;
	void removingDominantVertex();

private:

	char *vertices;			
	int **matrix;			
	int maxVertices;		
	int numOfVertices;		


};

