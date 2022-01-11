// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	
	
	int x=0;
	int y=0;
	int z=0;
	
	char joe = '1'; 
	char add = '+';
	char subtract = '-';
	char multiply = '*';
	char divide = '/';
	
	
	cout<<"please enter a number- ";
	cin >> y;
	cout<<"please enter a second number- ";
	cin >> x;
	cout<<"what do i do to these numbers? ";
	cin >> joe;
	
		if(joe == add) {
		cout<<x+y<<" is your number"<<endl;
	}
		if(joe == subtract) {
		cout<<x-y<<" is your number"<<endl;
	}
		if(joe == multiply) {
		cout<<x*y<<" is your number"<<endl;
	}
		if(joe == divide) {
		cout<<x/y<<" is your number"<<endl;
	}
}
