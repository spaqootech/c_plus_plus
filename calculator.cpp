//Calculator using C++ in Dev C++
#include <iostream>
using namespace std;
main(){
	int NumOne , NumTwo;
	char Op;
	cout << "Calculator";
	cout << "\n Enter First Number = ";
	cin >> NumOne;
	cout << "\n Enter Second Number = ";
	cin >> NumTwo;
	cout << "\n Enter Operator (+ - * /) = ";
	cin >> Op;
switch(Op){
	case '+':
			cout << "\n First Number + Second Number = "<< NumOne + NumTwo;
			break;
			
	case '-':
			cout << "\n First Number - Second Number = "<< NumOne - NumTwo;
			break;
			
	case '*':
			cout << "\n First Number * Second Number = "<< NumOne * NumTwo;
			break;
			
	case '/':
			cout << "\n First Number / Second Number = "<< NumOne / NumTwo;
			break;
			
	default:
			cout << "\n cannot calculate "<< NumOne <<" , "<< NumTwo;
			break;
}
}
