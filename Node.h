// The Node is a state of array of size 8 containing two of each members (r,k,b,q)
#include <vector>
#include "Domain.h"


class Node
{
public:
	Domain * dptr;
	int action;
	int visits; 			// number of times visited
	float reward; 		// accumulated reward value
	Node * parent;		// null if root
	std::vector<Node> children;

	void update(int value);		// update node and back-propagate to parent
	void addChild(Node child);	// add child node
	Node();
};
