// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here

	int c=1;
	int xcor;
	int ycor;

	int i;
	char haha = 'a';
	char lol = 'b';
	
		cout<<"enter a symbol- ";
		cin >> haha;
		cout<<"how long- ";
		cin >> i;
		cout <<"horizontal, vertical, diagonal (h or v or d)- ";
		cin >>lol;
		cout <<"what x coordinate do you want? ";
		cin >>xcor;
		cout <<"What y coordinate do you want? ";
		cin>>ycor;
		
	if(lol == 'v'){
		while(true){
			gotoxy(xcor,ycor);
			cout<<haha<<endl;
			if(c == i){
				break;
				
			}
			c=c+1;
			ycor=ycor+1;
		}
			cout<<""<<endl;	
			c=0;
	}
	
	if(lol == 'h'){
		while(true){
			gotoxy(xcor,ycor);
			cout<<haha;
			if(c == i){
				break;
				
			}
			c=c+1;
			xcor=xcor+1;
		}	
			cout<<""<<endl;	
			c=0;
	}

	if(lol == 'd'){
		while(true){
			gotoxy(xcor,ycor);
			cout<<haha;
			if(c == i){
				break;
			}
			c=c+1;
			xcor=xcor+1;
			ycor=ycor+1;
		}	
			cout<<""<<endl;	
			c=0;
	}
	
		}
	

