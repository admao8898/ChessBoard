/*
 * main.cpp
 *
 *  Created on: Aug 2, 2020
 *      Author: Richard
 */

#include <iostream>
#include <vector>
//#include "Domain.h"
#include "Node.h"

using namespace std;

int UCTSearch(char*);


int main(){
	Node A;
	//cout << A.action << endl << A.visits << endl << A.reward << endl;
	char s[8] = {'r','r','b','b','k','k','q','K'};
	int temp = UCTSearch(s);

	return 0;
}

int UCTSearch(char s0[8]){
// returns an action
	Node root;
	root.dptr = new Domain(s0);
	root.dptr->printState();
	return 0;

}


