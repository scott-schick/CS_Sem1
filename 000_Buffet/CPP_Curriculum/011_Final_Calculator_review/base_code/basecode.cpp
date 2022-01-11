// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here

char c = 'c';
char f = ' ';
int i;
int i2;
char math;
int soln=0;


cout<<"Please enter a character- ";
cin>>c;
cout<<"Please enter an integer- ";
cin>>i;
cout<<"Please enter the operation to preform- ";
cin>>math;
cout<<"Please enter a second integer- ";
cin>>i2;

		if (math == '+'){
			soln = i+i2;
		}
		else if (math == '-'){
			soln = i-i2;
		}
		else if (math == '*'){
			soln = i*i2;
		}
		else if (math == '/'){
			soln = i/i2;
		}


int a = 30;
int b = 10;
int z = 31;
int y = 11;


for(b=10;b<=16;){
	for(a=30;a<=50;){
		gotoxy(a,b);
		cout<<c<<endl;
		a=a+1;
		}
	b=b+1;
}

for(y=11;y<16;){
	for(z=31;z<50;){
		gotoxy(z,y);
		cout<<f<<endl;
		z=z+1;
	}
	y=y+1;
}


gotoxy(37,13);
cout<<i;
cout<<math;
cout<<i2;
cout<<" = ";
cout<<soln;
}

	

