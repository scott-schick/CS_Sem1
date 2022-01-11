// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here

char a;
cout<<"Merry Christmas! How do you want the snowflakes to look like? ";
cin>>a;
int y=4;
int x=5;

for(y=4;y<20;y++){
	
	
	gotoxy(x,y);
	cout<<a<<endl;
	sleep(1);
	gotoxy(x,y);
	cout<<' '<<endl;
	sleep(1);


}

}