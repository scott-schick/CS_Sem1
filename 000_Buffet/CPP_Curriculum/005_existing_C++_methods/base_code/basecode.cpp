// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here


	int c=1;
	int h=1;
	int l=5;

	int i;
	char haha = 'a';
	char lol = 'b';
	
		cout<<"enter a symbol- ";
		cin >> haha;
		cout<<"how long- ";
		cin >> i;
		cout <<"horizontal, vertical, diagonal (h or v or d)- ";
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

	if(lol == 'd'){
		while(true){
			gotoxy(h,l);
			cout<<haha<<endl;
			if(c == i){
				break;
			}
			c=c+1;
			h=h+1;
			l=l+1;
		}	
			cout<<""<<endl;	
			c=0;
	}
	
		}
	



