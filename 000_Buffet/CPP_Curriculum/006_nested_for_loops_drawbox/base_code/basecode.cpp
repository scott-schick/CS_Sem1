// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here

int w;
int h;
char c = 'c';

cout<<"What shape makes up the box? ";
cin>>c;
cout<<"How tall is the box? ";
cin>>h;
cout<<"How wide is the box? ";
cin>>w;

int a = 1;
int b = 5;
int d = 0;
	

for(b=5;b<=h+4;){
	for(a=1;a<=w;){
		gotoxy(a,b);
		cout<<c<<endl;
		a=a+1;
		}
	b=b+1;
}
	
}

	

	


