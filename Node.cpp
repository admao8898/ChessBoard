#include "Node.h"
//#include "Domain.h"
#include <vector>
#include <iostream>

Node::Node(){
	dptr = nullptr;
	action = 0;
	visits = 0;
	reward = 0;
	parent = nullptr;
}

void Node::update(int value){					// update node and back-propagate to parent
	// write update code here
}

void Node::addChild(Node child){				// add child node
	std::vector<Node>::iterator it;
	it = children.begin();
	children.insert(it, child);
}
