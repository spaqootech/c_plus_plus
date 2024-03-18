// Table Generator
#include <iostream>
using namespace std;
main(){
	int Num;
	cout << " Table Generator \n";
	cin >>Num;
	//Run code in Loop to get more values
	//for Loop
	for(int i =1 ; i<=10; i++){
		cout << "\n "<<Num<<" * "<<i<<" = " << Num * i ;
	}
}
