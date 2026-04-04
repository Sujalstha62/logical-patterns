#include<iostream>
#include<conio.h>
#include<string>
#include<vector>
using namespace std;
void store(char ch,int n,char chara,vector<string> &arr){
	int i,j,t=0;
	if(ch=='A'|| ch=='a'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				i+j==n/2||  //topleft
				(j-i)==n/2||   //topright
				(i>n/2&&(j==0||j==n-1))||//legs
				i==n-n/3-1 //middle line
				)arr[i]+=chara;
				else arr[i]+=' ';
			}
			arr[i]+=string(n/4,' ');
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
				)arr[i]+=chara;
				else arr[i]+=' ';
			}
			arr[i]+=string(n/4,' ');
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
				)arr[i]+=chara;
				else arr[i]+=' ';
			}
			arr[i]+=string(n/4,' ');
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
				)arr[i]+=chara;
				else arr[i]+=' ';
			}
			arr[i]+=string(n/4,' ');
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
				)arr[i]+=chara;
				else arr[i]+=' ';
			}
			arr[i]+=string(n/4,' ');
		}
	}
	else if(ch=='F'||ch=='f'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				j==0||//left line
				i==0||//top line
				i==n/2//middle line
				)arr[i]+=chara;
				else arr[i]+=' ';
			}
			arr[i]+=string(n/4,' ');
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
				)arr[i]+=chara;
				else arr[i]+=' ';
			}
			arr[i]+=string(n/4,' ');
		}
	}
	else if(ch=='H'|| ch=='h'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				j==0||//left line
				j==n-1||//right line
				i==n/2//bridge
				)arr[i]+=chara;
				else arr[i]+=' ';
			}
			arr[i]+=string(n/4,' ');
		}
	}
	else if(ch=='I'||ch=='i'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				i==0||//top line
				i==n-1||//bottom line
				j==n/2//middle line
				)arr[i]+=chara;
				else arr[i]+=' ';
			}
			arr[i]+=string(n/4,' ');
		}
	}
	else if(ch=='J'||ch=='j'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				i==0||//top line
				j==n/2||//middle line
				i-j==n/2//bottom left  diagonal
				)arr[i]+=chara;
				else arr[i]+=' ';
			}
			arr[i]+=string(n/4,' ');
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
				)arr[i]+=chara;
				else arr[i]+=' ';
			}
			arr[i]+=string(n/4,' ');
		}
	}
	else if(ch=='L'||ch=='l'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				j==0||//left line
				i==n-1//bottom line
				)arr[i]+=chara;
				else arr[i]+=' ';
			}
			arr[i]+=string(n/4,' ');
		}
	}
	else if(ch=='M'||ch=='m'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				j==0||//left line
				j==n-1||//right line
				(i<n/2+1&&(i==j||n-i-1==j))//border diagonals
				)arr[i]+=chara;
				else arr[i]+=' ';
			}
			arr[i]+=string(n/4,' ');
		}
	}
	else if(ch=='N'||ch=='n'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				j==0||//left line
				j==n-1||//rightline
				i==j//diagonal
				)arr[i]+=chara;
				else arr[i]+=' ';
			}
			arr[i]+=string(n/4,' ');
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
				)arr[i]+=chara;
				else arr[i]+=' ';
			}
			arr[i]+=string(n/4,' ');
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
				)arr[i]+=chara;
				else arr[i]+=' ';
			}
			arr[i]+=string(n/4,' ');
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
				)arr[i]+=chara;
				else arr[i]+=' ';
			}
			arr[i]+=string(n/4,' ');
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
				)arr[i]+=chara;
				else arr[i]+=' ';
			}
			arr[i]+=string(n/4,' ');
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
				)arr[i]+=chara;
				else arr[i]+=' ';
			}
			arr[i]+=string(n/4,' ');
		}
	}
	else if(ch=='T'||ch=='t'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				i==0||//top line
				j==n/2//middle line
				)arr[i]+=chara;
				else arr[i]+=' ';
			}
			arr[i]+=string(n/4,' ');
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
				)arr[i]+=chara;
				else arr[i]+=' ';
			}
			arr[i]+=string(n/4,' ');
		}
	}
	else if(ch=='V'||ch=='v'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				i-j==i/2||
				i-n+j+1==i/2
				)arr[i]+=chara;
				else arr[i]+=' ';
			}
			arr[i]+=string(n/4,' ');
		}
	}
	else if(ch=='W'||ch=='w'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				j==0||//left line
				j==n-1||//right line
				(i>n/2-1&&(i==j||n-i-1==j))//border diagonals
				)arr[i]+=chara;
				else arr[i]+=' ';
			}
			arr[i]+=string(n/4,' ');
		}
	}
	else if(ch=='X'||ch=='x'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				i==j||//right diagonal
				n-i-1==j//left diagonal
				)arr[i]+=chara;
				else arr[i]+=' ';
			}
			arr[i]+=string(n/4,' ');
		}
	}
	else if(ch=='Y'||ch=='y'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				(i>n/2&&j==n/2)||//border middle line
				(i<n/2+1&&(i==j||n-i-1==j))//border diagonals
				)arr[i]+=chara;
				else arr[i]+=' ';
			}
			arr[i]+=string(n/4,' ');
		}
	}
	else if(ch=='Z'||ch=='z'){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(
				i==0||//top line
				i==n-1||//bottom line
				i==n-j-1//diagonal
				)arr[i]+=chara;
				else arr[i]+=' ';
			}
			arr[i]+=string(n/4,' ');
		}
	}
	else if(ch==' '){
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				arr[i]+=" ";
			}
		}
	}
}
int main(){
	char ch,chara='@';
	int n=n=4*2+1,ch1;
	string alpha ="a";
	vector<string> arr(n); 
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
			else{
				arr.clear();
				arr.resize(n,"");
				for(int i=0;i<alpha.length();i++){
					store(alpha[i],n,chara,arr);
				}
				for(int i=0;i<n;i++){
					cout<<arr[i]<<endl;
				}
			}
			cout<<endl;
		}
		cout<<"Enter 'Y' to continue:";
		cin>>ch;
		cout<<endl;
	}while(ch=='Y'||ch=='y');
}
