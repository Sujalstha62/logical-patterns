#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
void display(char ch,int n,char chara){
	int i,j,t;
	if(ch=='A'|| ch=='a'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				i+j==n/2||  //topleft
				(j-i)==n/2||   //topright
				(i>n/2&&(j==0||j==n-1))||//legs
				i==n-n/3-1 //middle line
				)cout<<chara;
				else cout<<' ';
			}
			cout<<endl;
		}
	}
	else if(ch=='B'|| ch=='b'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				j==0||//left line
				(j<n-n/4&&(i==0||i==n-1||i==n/2))||//border top middle down line
				(i<n/2&&i+j==n+n/4-1)||//middle up diagonal
				(j-i==n/4&&i>n/2)||//middle down diagonal
				(j!=n-1&&j-i==n-n/4-1)||//top right corner
				2*n-i-j-2==n/4//bottom right corner
				)cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch=='C' || ch=='c'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if
				(
				i+j==n/4||  //topleft
				j-i==n-n/4-1||//topright
				i-j==n-n/4-1||//bottomleft
				2*n-i-j-2==n/4||//bottomright
				((i>n/4&&i<n-n/4)&&(j==0))|| //boundary left line
				((j>n/4&&j<n-n/4)&&(i==0||i==n-1))//boundary top-down line
				)cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch=='D' || ch=='d'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				j-i==n-n/4-1||//topright
				2*n-i-j-2==n/4||//bottomright
				((i>n/4&&i<n-n/4)&&j==n-1)||//border right line
				j<n-n/4&&(i==0||i==n-1)||//border top-down line
				j==0//left line
				)cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch=='E'|| ch=='e'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				j==0||//left line
				i==0||//topline
				i==n-1||//bottom line
				i==n/2//middle line
				)cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch=='F'||ch=='f'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				j==0||//left line
				i==0||//top line
				i==n/2//middle line
				)cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch=='G' || ch=='g'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				i+j==n/4||//topleft
				j-i==n-n/4-1||//top right
				i-j==n-n/4-1||//bottom left
				2*n-i-j-2==n/4||//bottom right
				((i>n/4&&i<n-n/4)&&(j==0))||//border left line
				((j>n/4&&j<n-n/4)&&(i==0||i==n-1))||//border top-down line
				i==n-n/4-1&&j>n/2//middle G line
				)cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch=='H'|| ch=='h'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				j==0||//left line
				j==n-1||//right line
				i==n/2//bridge
				)cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch=='I'||ch=='i'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				i==0||//top line
				i==n-1||//bottom line
				j==n/2//middle line
				)cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch=='J'||ch=='j'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				i==0||//top line
				j==n/2||//middle line
				i-j==n/2//bottom left  diagonal
				)cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch=='K'||ch=='k'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				j==0||//left line
				2*i-j==n-1||//bottom diagonal
				2*i+j==n-1||//upper diagonal
				i==n/2&&j==1//middle connection
				)cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch=='L'||ch=='l'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				j==0||//left line
				i==n-1//bottom line
				)cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch=='M'||ch=='m'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				j==0||//left line
				j==n-1||//right line
				(i<n/2+1&&(i==j||n-i-1==j))//border diagonals
				)cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch=='N'||ch=='n'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				j==0||//left line
				j==n-1||//rightline
				i==j//diagonal
				)cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch=='O' || ch=='o'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				i+j==n/4||//top left corner
				j-i==n-n/4-1||//top right corner
				i-j==n-n/4-1||//bottom left corner
				2*n-i-j-2==n/4||//bottom righ corner
				((i>n/4&&i<n-n/4)&&(j==0||j==n-1))||//border left right line
				((j>n/4&&j<n-n/4)&&(i==0||i==n-1))//border top bottom line
				)cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch=='P'|| ch=='p'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				j==0||//left line
				(j<n-n/4&&(i==0||i==n/2))||//border top middle line
				(i<n/2&&i+j==n+n/4-1)||//middle up diagonal
				(j!=n-1&&j-i==n-n/4-1)//top right corner
				)cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch=='Q' || ch=='q'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				i+j==n/4||//top left corner
				j-i==n-n/4-1||//top right corner
				i-j==n-n/4-1||//bottom left corner
				2*n-i-j-2==n/4||//bottom righ corner
				((i>n/4&&i<n-n/4)&&(j==0||j==n-1))||//border left right line
				((j>n/4&&j<n-n/4)&&(i==0||i==n-1))||//border top bottom line
				(i>n/2&&i==j)//diagonal
				)cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch=='R'|| ch=='r'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				j==0||//left line
				(j<n-n/4&&(i==0||i==n/2))||//border top middle line
				(i<n/2&&i+j==n+n/4-1)||//middle up diagonal
				(j!=n-1&&j-i==n-n/4-1)||//top right corner
				(i>n/2-1&&i==j)//border diagonal
				)cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch=='S'|| ch=='s'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				((j>n/4&&j<n-n/4)&&(i==0||i==n-1||i==n/2))||//border top middle down line
				(i<n/2+1&&i-j==n/4)||//middle left diagonal
				(j-i==n/4&&i>n/2)||//middle right diagonal
				i+j==n/4||//top left corner
				(j!=n-1&&j-i==n-n/4-1)||//top right corner
				(j!=0&&i-j==n-n/4-1)||//bottm left corner
				2*n-i-j-2==n/4//bottom right corner
				)cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch=='T'||ch=='t'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				i==0||//top line
				j==n/2//middle line
				)cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch=='U' || ch=='u'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				i-j==n-n/4-1||//bottom left corner
				2*n-i-j-2==n/4||//bottom righ corner
				(i<n-n/4)&&(j==0||j==n-1)||//border left right line
				(j>n/4&&j<n-n/4)&&i==n-1//border bottom line
				)cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch=='V'||ch=='v'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				i-j==i/2||
				i-n+j+1==i/2
				)cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch=='W'||ch=='w'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				j==0||//left line
				j==n-1||//right line
				(i>n/2-1&&(i==j||n-i-1==j))//border diagonals
				)cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch=='X'||ch=='x'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				i==j||//right diagonal
				n-i-1==j//left diagonal
				)cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch=='Y'||ch=='y'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				(i>n/2&&j==n/2)||//border middle line
				(i<n/2+1&&(i==j||n-i-1==j))//border diagonals
				)cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch=='Z'||ch=='z'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				i==0||//top line
				i==n-1||//bottom line
				i==n-j-1//diagonal
				)cout<<chara;
				else cout<<" ";
			}
			cout<<endl;
		}
	}
	else if(ch==' '){
		for(i=0;i<n/2;i++){
			for(j=0;j<n;j++){
				cout<<" ";
			}
			cout<<endl;
		}
	}
	cout<<endl;
}
int main(){
	char ch,chara='@';
	int n=n=4*2+1,ch1;
	string alpha ="welcome";
	do{
		while(1){
			cout<<"1)Change font size\n"
				<<"2)Change display character\n"
				<<"3)Enter string\n"
				<<"4)Display\n"
				<<"Enter choice:";
			cin>>ch1;
			if(cin.fail()||ch1>4){
				cout<<"Error!!\n";
				cin.clear();
                cin.ignore(1,'\n');
				break;
			}
			else if(ch1==1){
				cout<<"Enter font size:";
				cin>>n;
				n=4*n+1;
			}
			else if(ch1==2){
				cout<<"Enter the character:";
				cin>>chara;
			}
			else if(ch1==3){
				cout<<"Enter a string:";
				cin.ignore();
				getline(cin,alpha);
			}
			else
			for(int i=0;i<alpha.length();i++){
				cout<<endl;
				display(alpha[i],n,chara);
			}
			cout<<endl;
		}
		cout<<"Enter 'Y' to continue:";
		cin>>ch;
		cout<<endl;
	}while(ch=='Y'||ch=='y');
}
