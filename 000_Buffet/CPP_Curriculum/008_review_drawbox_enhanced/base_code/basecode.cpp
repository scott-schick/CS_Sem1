// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
int w;
int h;
char c = 'c';
int a;
int b;
int d;

cout<<"What shape makes up the box? ";
cin>>c;
cout<<"How tall is the box? ";
cin>>h;
cout<<"How wide is the box? ";
cin>>w;
cout<<"Where should the x be? ";
cin>>a;
cout<<"Where should the y be? ";
cin>>b;

int z=a;
int q=b;

for(b=q;b<=q+h-1;){
	gotoxy(a,b);
	for(a=z;a<=z+w-1;){
		gotoxy(a,b);
		cout<<c<<endl;
		a=a+1;
		}
	b=b+1;
}
	
}

