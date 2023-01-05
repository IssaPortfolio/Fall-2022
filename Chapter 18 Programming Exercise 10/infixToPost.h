#include <iostream>
#include <string>
#include "linkedStackType.h"
using namespace std;

template <class Type>
class infixToPost: public linkedStackType<Type> {
public:
	void getInfix(string);
	void showInfix();
	void showPostFix();
	void convertToPostfix();
	int precedence(char);
private:
	string infx, pfx;
};
	
	
template <class Type>
void infixToPost<Type>::getInfix(string infix) {
	infx = infix;
}

template <class Type>
void infixToPost<Type>::showInfix() {
	cout << "infx Expression : " << infx << "\n";
}
template <class Type>
void infixToPost<Type>::showPostFix() {
	cout << "Postfix Expression : " << pfx << "\n";
}


template <class Type>
void infixToPost<Type>::convertToPostfix() {
	linkedStackType<char> stack;

	for (int i = 0; i < infx.length(); i++) {
		char c = infx[i];
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
			pfx += c;
		else if (c == '(')
			stack.push('(');
		else if (c == ')') {
			while (stack.top() != '(') {
				pfx += stack.top();
				stack.pop();
			}
			stack.pop();
		}
		else {
			while (!stack.isEmptyStack() && precedence(infx[i]) <= precedence(stack.top())) {
				if (c == '^' && stack.top() == '^')
					break;
				else {
					pfx += stack.top();
					stack.pop();
				}
			}
			stack.push(c);
		}
	}
	while (!stack.isEmptyStack()) {
		pfx += stack.top();
		stack.pop();
	}
}

template <class Type>
int infixToPost<Type>::precedence(char c)
{
	if (c == '^')
		return 3;
	else if (c == '/' || c == '*')
		return 2;
	else if (c == '+' || c == '-')
		return 1;
	else
		return -1;
}