// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
	
//trees
	int x = 0;
	int y = 0;
	int xx = 12;
	int xxx = 15;
	int yy = 3;
	
	for(xx=12;xx>5;){
	for(x=xx; x<xxx;){
		for(y=yy; y<10;){
		gotoxy(x,y);
		cout<<"c";
		x=x+1;
		y=y+1;
		}
	}
	xx=xx-1;
	xxx=xxx-1;
	yy=yy+1;
	}
	
	
	int a = 0;
	int b = 0;
	int aa = 100;
	int aaa = 103;
	int bb = 3;
	
	for(aa=100;aa>93;){
	for(a=aa; a<aaa;){
		for(b=bb; b<10;){
		gotoxy(a,b);
		cout<<"c";
		a=a+1;
		b=b+1;
		}
	}
	aa=aa-1;
	aaa=aaa-1;
	bb=bb+1;
	}
	
	gotoxy(7,9);
	cout<<" ";
	
	gotoxy(95,9);
	cout<<" ";
	
	gotoxy(11,10);
	cout<<"| |";
	
	gotoxy(99,10);
	cout<<"| |";
	
	gotoxy(11,11);
	cout<<"| |";
	
	gotoxy(99,11);
	cout<<"| |";

//presents

int g;
int h;
int i;
int j;

for(g=21; g<=27; g++){
	for(h=8; h<=11; h++){
		gotoxy(g,h);
		cout<<"o";
	}
	
	for(i=22; i<27; i++){
		for(j=9; j<11; j++){
		gotoxy(i,j);
		cout<<" ";
		}
	}
}

gotoxy(23,7);
cout<<">=<";

gotoxy(24,9);
cout<<"+";

gotoxy(24,10);
cout<<"+";

//snowman
int k;
int l;
int m;
int n;

for(k=86; k<=88; k++){
	for(l=4; l<=5; l++){
		gotoxy(k,l);
		cout<<'*'<<endl;
	}
}
for(k=85; k<=89; k++){
	for(l=6; l<=8; l++){
		gotoxy(k,l);
		cout<<'*'<<endl;
	}
}
for(k=84; k<=90; k++){
	for(l=9; l<=11; l++){
		gotoxy(k,l);
		cout<<'*'<<endl;
	}
}

int o;
int v;
char q = 'q';
int vv;

for(o=40;o<=40; o++){
	for(v=3; v<=11;v++){
		gotoxy(o,v);
		cout<<"M E R R Y  C H R I S T M A S"<<endl;
		sleep(1);
		gotoxy(o,v);
		cout<<"                            ";
		sleep(1);
	}
}
}