// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	int x=5;
	int y=15;
	
	cout<<"part one"<<endl;
	while(true){
		cout<<x<<endl;
		
		if (x == 25){
			break;
		}
		
		x = x+1;
	}
	
	cout<<""<<endl;
	cout<<"part two"<<endl;
		while(true){
		cout<<y<<endl;
		
		if (y == 5){
			break;
		}
		
		y = y-1;
	}
	

}
