#include<iostream>
#include<string>
#define size 3
using namespace std;
void display(char ch,int n,char chara){
	int i,j,t;
	if(ch=='A'|| ch=='a'){
		t=n/2;
		cout<<string(t--,' ')<<chara<<endl;
		for(i=1;i<n-1;i++){
			if(i==n/2+1) cout<<string(n,chara)<<endl;
			else if(t>=0) cout<<string(t--,' ');
			cout<<chara<<string(n/2-2*t+(n/2-3),' ')<<chara;
			cout<<endl;
		}
	}
	else if(ch=='C' || ch=='c'){
		t=n/4;
		for(i=0;i<n;i++){
			if(i<=n/4){
				if(i==0) cout<<string(t,' ')<<string(n-2*t,chara);
				else cout<<string(t,' ')<<chara<<string(n-2*t-2,' ')<<chara;
				t--;
			}
			else if(i>=n-n/4-1){
				t++;
				if(i==n-1) cout<<string(t,' ')<<string(n-2*t,chara);
				else cout<<string(t,' ')<<chara<<string(n-2*t-2,' ')<<chara;
			}
			else cout<<chara;
			cout<<endl;
		}
	}
	else if(ch=='D' || ch=='d'){
		t=n/4;
		for(i=0;i<n;i++){
			if(i<=n/4){
				if(i==0) cout<<string(n-t,chara);
				else cout<<chara<<string(n-t-2,' ')<<chara;
				t--;
			}
			else if(i>=n-n/4-1){
				t++;
				if(i==n-1) cout<<string(n-t,chara);
				else cout<<chara<<string(n-t-2,' ')<<chara;
			}
			else cout<<chara<<string(n-2,' ')<<chara;
			cout<<endl;
		}
	}
	else if(ch=='E'|| ch=='e'){
		for(i=0;i<n;i++){
			if(i==0||i==n/2||i==n-1)cout<<string(n,chara);
			else cout<<chara;
			cout<<endl;
		}
	}
	else if(ch=='F'||ch=='f'){
		for(i=0;i<n;i++){
			if(i==0||i==n/2)cout<<string(n,chara);
			else cout<<chara;
			cout<<endl;
		}
	}
	else if(ch=='G' || ch=='g'){
		t=n/4;
		for(i=0;i<n;i++){
			if(i<=n/4){
				if(i==0) cout<<string(t,' ')<<string(n-2*t,chara);
				else cout<<string(t,' ')<<chara<<string(n-2*t-2,' ')<<chara;
				t--;
			}
			else if(i>=n-n/4-1){
				t++;
				if(i==n-n/4-1) cout<<chara<<string(n/2,' ')<<string(n/2,chara);
				else if(i==n-1) cout<<string(t,' ')<<string(n-2*t-1,chara)<<chara<<string(t-1,' ')<<chara;
				else cout<<string(t,' ')<<chara<<string(n-2*t-2,' ')<<chara<<string(t-1,' ')<<chara;
			}
			else cout<<chara;
			cout<<endl;
		}
	}
	else if(ch=='H'|| ch=='h'){
		for(i=0;i<n;i++){
			if(i==n/2)cout<<string(n,chara);
			else cout<<chara<<string(n-2,' ')<<chara;
			cout<<endl;
		}
	}
	else if(ch=='I'||ch=='i'){
		for(i=0;i<n;i++){
			if(i==0||i==n-1)cout<<string(n,chara);
			else cout<<string(n/2,' ')<<chara;
			cout<<endl;
		}
	}
	else if(ch=='L'||ch=='l'){
		for(i=0;i<n;i++){
			if(i==n-1)cout<<string(n,chara);
			else cout<<chara;
			cout<<endl;
		}
	}
	else if(ch=='O' || ch=='o'){
		t=n/4;
		for(i=0;i<n;i++){
			if(i<=n/4){
				if(i==0) cout<<string(t,' ')<<string(n-2*t,chara);
				else cout<<string(t,' ')<<chara<<string(n-2*t-2,' ')<<chara;
				t--;
			}
			else if(i>=n-n/4-1){
				t++;
				if(i==n-1) cout<<string(t,' ')<<string(n-2*t,chara);
				else cout<<string(t,' ')<<chara<<string(n-2*t-2,' ')<<chara;
			}
			else cout<<chara<<string(n-2,' ')<<chara;
			cout<<endl;
		}
	}
	else if(ch=='T'||ch=='t'){
		for(i=0;i<n;i++){
			if(i==0)cout<<string(n,chara);
			else cout<<string(n/2,' ')<<chara;
			cout<<endl;
		}
	}
	cout<<endl;
}
int main(){
	char ch,chara;
	int n=2*size+3,ch1;
	string alpha ="@";
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
	display('a',n,alpha[0]);
	display('b',n,alpha[0]);
	display('c',n,alpha[0]);
	display('d',n,alpha[0]);
	display('e',n,alpha[0]);
	display('f',n,alpha[0]);
	display('g',n,alpha[0]);
	display('h',n,alpha[0]);
	display('i',n,alpha[0]);
	display('j',n,alpha[0]);
	display('k',n,alpha[0]);
	display('l',n,alpha[0]);
	display('m',n,alpha[0]);
	display('n',n,alpha[0]);
	display('o',n,alpha[0]);
	display('p',n,alpha[0]);
	display('q',n,alpha[0]);
	display('r',n,alpha[0]);
	display('s',n,alpha[0]);
	display('t',n,alpha[0]);
	display('u',n,alpha[0]);
	display('v',n,alpha[0]);
	display('w',n,alpha[0]);
	display('x',n,alpha[0]);
	display('y',n,alpha[0]);
	display('z',n,alpha[0]);
}
