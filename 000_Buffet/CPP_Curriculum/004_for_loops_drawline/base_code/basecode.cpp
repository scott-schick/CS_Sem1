// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here

	int c=1;
	int i;
	char haha = 'a';
	char lol = 'b';
	while(true){
		cout<<"enter a symbol- ";
		cin >> haha;
		cout<<"how long- ";
		cin >> i;
		cout <<"horizontal or vertical (h or v)- ";
		cin >>lol;
		
	if(lol == 'v'){
		while(true){
			cout<<haha<<endl;
			if(c == i){
				break;
				
			}
			c=c+1;
		}
			cout<<""<<endl;	
			c=0;
	}
	
	if(lol == 'h'){
		while(true){
			cout<<haha;
			if(c == i){
				break;
				
			}
			c=c+1;
		}	
			cout<<""<<endl;	
			c=0;
	}
	
		}
	}

