#include <iostream>
#include <string>
#include "infixToPost.h"
using namespace std;


int main() {	

	string expression;
	infixToPost<int> infixToPost;
	cout << "Enter an expression (no spaces): ";
	getline(cin, expression);
	infixToPost.getInfix(expression);
	infixToPost.showInfix();
	infixToPost.convertToPostfix();
	infixToPost.showPostFix();


	system("pause");
	return 0;
}
