
#include <string>
#include <vector>

class Domain{
public:
	char state[8];

	int applyAction(int action);			// returns winner
	int playout();							// returns score
	std::vector<int> legalActions();
	void printState();

	Domain(char s[8]);

};
