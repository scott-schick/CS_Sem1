// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
int w;
int h;
char c = 'c';
int x;
int y;

cout<<"What shape makes up the box? ";
cin>>c;
cout<<"How tall is the box? ";
cin>>h;
cout<<"How wide is the box? ";
cin>>w;
cout<<"What x coordinate should the box be at? ";
cin>>x;
cout<<"What y coordinate should the box be at? ";
cin>>y;


int a = 1;
int b = 5;
int d = 0;
int z = 2;
//int y = 6;
char f = ' ';
int xx = x;
int yy = y;
int x1 = x+1;
int y1 = y+1;
int x2 = x1;
int y2 = y1;

	

for(y=yy;y<=h+yy;){
	for(x=xx;x<=w+xx;){
		gotoxy(x,y);
		cout<<c<<endl;
		x=x+1;
		}
	y=y+1;
}

for(y1=y2;y1<h+y2;){
	for(x1=x2;x1<w;){
		gotoxy(x1,y1);
		cout<<f<<endl;
		x1=x1+1;
	}
	y1=y1+1;
}
}

