// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// write code here
//	cout<<"yeah we are starting c++"<<endl;
	
//	int x=0;
//	char eunju = 'a';
//	while(true){
//		cout<< "lmao";
//		cin>>eunju;
//		if (eunju=='q'){
//			cout<<"i hate you";
//			break;
//		}
		
//		if (x==100){
//			break;
//		}
//		x=x+1;3
//	}
	
	int x=0;
	int y=0;
	char eunju = 'a';
	char eunja = 'b';
	while(true){
		cout<<"number please ";
		cin>>x;
		cout<<"another number please ";
		cin>>y;
		cout<<"plus, minus, times, divide? ";
		cin>>eunju;
		
		if (eunju == '+'){
			cout<<x+y<<endl;
		}
		else if (eunju == '-'){
			cout<<x-y<<endl;
		}
		else if (eunju == '*'){
			cout<<x*y<<endl;
		}
		else if (eunju == '/'){
			cout<<x/y<<endl;
		}
		char eunju = 'a';
	}
}
