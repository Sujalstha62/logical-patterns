#include<iostream>
#include<string>
#define size 2
using namespace std;
void display(char ch,int n,char chara){
	int i,j,t;
	if(ch=='A'|| ch=='a'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(i+j==n/2||(j-i)==n/2||(i>n/2&&(j==0||j==n-1))||i==n/2+1)cout<<chara;
				else cout<<' ';
			}
			cout<<endl;
		}
	}
	else if(ch=='C' || ch=='c'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(i+j==n/4||j-i==n-n/4-1||i-j==n-n/4-1||2*n-i-j-2==n/4||((i>n/4&&i<n-n/4)&&(j==0))||((j>n/4&&j<n-n/4)&&(i==0||i==n-1)))cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch=='D' || ch=='d'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(j-i==n-n/4-1||2*n-i-j-2==n/4||((i>n/4&&i<n-n/4)&&j==n-1)||j<n-n/4&&(i==0||i==n-1)||j==0)cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch=='E'|| ch=='e'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(j==0||i==0||i==n-1||i==n/2)cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch=='F'||ch=='f'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(j==0||i==0||i==n/2)cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch=='G' || ch=='g'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(i+j==n/4||j-i==n-n/4-1||i-j==n-n/4-1||2*n-i-j-2==n/4||((i>n/4&&i<n-n/4)&&(j==0))||((j>n/4&&j<n-n/4)&&(i==0||i==n-1))||i==n-n/4-1&&j>n/2)cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch=='H'|| ch=='h'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(j==0||j==n-1||i==n/2)cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch=='I'||ch=='i'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(i==0||i==n-1||j==n/2)cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch=='J'||ch=='j'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(i==0||j==n/2||i-j==n/2)cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch=='K'||ch=='k'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(j==0||2*i-j==n-1||2*i+j==n-1||i==n/2&&j==1)cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch=='L'||ch=='l'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(j==0||i==n-1)cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch=='O' || ch=='o'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(i+j==n/4||j-i==n-n/4-1||i-j==n-n/4-1||2*n-i-j-2==n/4||((i>n/4&&i<n-n/4)&&(j==0||j==n-1))||((j>n/4&&j<n-n/4)&&(i==0||i==n-1)))cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch=='T'||ch=='t'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(i==0||j==n/2)cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	cout<<endl;
}
int main(){
	char ch,chara='@';
	int n=2*size+3,ch1;
	string alpha ="abcdefghijklmnopqrstuvwxyz";
//	do{
//		while(1){
//			cout<<"1)Change font size\n"
//				<<"2)Change display character\n"
//				<<"3)Enter string size\n"
//				<<"4)Display\n"
//				<<"Enter choice:";
//			cin>>ch1;
//			if(cin.fail()||ch1>4){
//				cout<<"Error!!\n";
//				break;
//			}
//			if(ch1==1){
//				cout<<"Enter font size:";
//				cin>>n;
//				n=n*2+3;
//			}
//			else if(ch1==2){
//				cout<<"Enter the character:";
//				cin>>chara;
//			}
//			else if(ch1==3){
//				cout<<"Enter a string:";
//				cin>>alpha;
//			}
//			else
//			for(int i=0;i<alpha.length();i++){
//				display(alpha[i],n,chara);
//				cout<<endl;
//			}
//			cout<<endl;
//		}
//		
//		cout<<"Enter 'Y' to continue:";
//		cin>>ch;
//	}while(ch=='Y'||ch=='y');
for(int i=0;i<alpha.length();i++){
	display(alpha[i],n,chara);
}
}
