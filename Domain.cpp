#include "Domain.h"
#include <string>
#include <iostream>

Domain::Domain(char s[8]){
	for(int i=0; i<8; i++){
		state[i] = s[i];
	}
}

int Domain::applyAction(int action){ 		// returns winner
	// complete this
	return 0;
}

int Domain::playout(){						// returns score
	// complete this
	return 0;
}

std::vector<int> Domain::legalActions(){
	std::vector<int> ret;
	// complete this
	return ret;
}

void Domain::printState(){
	int i=0;
	std::cout << "[";
	for(i=0; i<8; i++){
		std::cout << " " << state[i];
	}
	std::cout << " ]" << std::endl;
	std::cout << "length: " << i << std::endl;
}
