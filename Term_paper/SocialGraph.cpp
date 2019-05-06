#include "SocialGraph.h"

ostream& operator<<(ostream& out, const Graph& g)
{
	for (int i = 0; i < g.numOfVertices; ++i)
	{
		out << g.vertices[i] << ": ";
		for (int j = 0; j < g.numOfVertices; ++j)
			out << g.matrix[i][j] << " ";
		out << endl;
	}

	return out;
}

Graph::Graph()
{
	numOfVertices = 0;
	maxVertices = MAX_VERTICES;

	vertices = new char[maxVertices];

	matrix = new int *[maxVertices];
	for (int i = 0; i < maxVertices; ++i)
		matrix[i] = new int[maxVertices](); // The parenthesis will initialize the array to 0
}

void Graph::createGraph(const string& fileName)
{
	if (numOfVertices != 0)		
		clearGraph();

	ifstream infile;

	infile.open(fileName);

	if (!infile)
	{
		cerr << "Cannot open the input file." << endl;
	}

	infile >> numOfVertices;

	char vertex;

	for (int i = 0; i < numOfVertices; ++i)
	{
		infile >> vertex;
		vertices[i] = vertex;
	}

	int adjacentVertex = 0;

	for (int i = 0; i < numOfVertices; ++i)
	{
		for (int j = 0; j < numOfVertices; ++j)
		{
			infile >> adjacentVertex;
			matrix[i][j] = adjacentVertex;
		}
	}

	infile.close();
}


Graph::~Graph()
{
	delete[] vertices;
	vertices = nullptr;

	for (int i = 0; i < maxVertices; ++i) {
		delete matrix[i];
	}
	delete[] matrix;
	matrix = nullptr;

	numOfVertices = 0;
}
