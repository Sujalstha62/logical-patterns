#include<iostream>
#include<vector>
#include<conio.h>
#include<math.h>
using namespace std;
int n;
void menu(){
	char list[][20]={
	"Diamond",
	"Diamond hollow",
	"Downhill",
	"Hour glass",
	"Pascal's triangle",
	"Pyramid with number",
	"Spiral",
	"X",
	"Snake",
	"Cross box",
	"Character Bridge",
	"Hollow hourglass",
	"Fractals_traingle"
	};
	int n = sizeof(list) / sizeof(list[0]);  // number of strings
    for(int i = 0; i < n; i++) {
        cout << i+1<<"."<<list[i] << endl;
    }
}
void character_bridge(){
	cout<<"Enter no of terms:";
	cin>>n;
	char ch='A'-1;
	for(int i=0;i<n;i++){
		ch++;
		for(int j=0;j<n-i;j++)cout<<ch++;
		cout<<string((i)*2,' ');
		ch--;
		for(int j=0;j<n-i;j++)cout<<ch--;
		cout<<endl;
	}
}
void crossbox(){
	cout<<"Enter a number: ";
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==0||i==n-1||j==i||j==n-1-i||j==0||j==n-1)
				cout<<"*";
			else cout<<" ";
		}
		cout<<endl;
	}
}
void diamond(){
	cout<<"Enter a number:";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<string(2*(n-i),' ');
		for(int j=0;j<=i*2;j++){
			if(j<=i)
			cout<<j+1;
			else
			cout<<2*i-j+1;
			cout<<" ";
		}
		cout<<endl;
	}
	for(int i=n-2;i>=0;i--){
		cout<<string(2*(n-i),' ');
		for(int j=i*2;j>=0;j--){
			if(j>=i)
			cout<<i*2-j+1;
			else
			cout<<j+1;
			cout<<" ";
		}
		cout<<endl;
	}
}
void downhill(){
    int a,b;
    cout << "Enter a number:";
    cin >> n;
    a=1;
    for(int i=n;i>=1;i--) {
        cout << a<<"\t" ;
        b=a-i; 
        a+=i;
        for(int j=i;j<n;j++) {
            cout << b <<"\t";
            b=b-j-1;
        }
        cout << endl;
    }
}
void fractals_triangle(){
	cout<<"Enter a number:";
	cin>>n;
	n=pow(2,n);
    for (int i = 0; i < n; i++) {
        cout<<string((n-i),' ');
        for (int j = 0; j <= i; j++) {
            if ((i & j) == j) 
                cout << "* ";
            else 
                cout << "  ";
        }
        cout << endl;
    }
}
void hollowdiamond(){
	cout<<"Enter a number:";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<string((n-i),' ');
		for(int j=0;j<=i*2;j++){
			if(j==0 || j==2*i)
			cout<<"*";	
			else
			cout<<" ";
		}
		cout<<endl;
	}
	for(int i=n-2;i>=0;i--){
		cout<<string((n-i),' ');
		for(int j=i*2;j>=0;j--){
			if(j==0 || j==2*i)
			cout<<"*";	
			else
			cout<<" ";
		}
		cout<<endl;
	}
}
void hollow_hourglass(){
	cout<<"Enter a number: ";
	cin>>n;
	n=n*2-1;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==0||i==n-1||j==i||j==n-1-i)
				cout<<"*";
			else cout<<" ";
		}
		cout<<endl;
	}
}
void hourglass(){
	cout<<"Enter a number:";
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i<=(n-1)/2){
				if(i<=j && j<n-i)
				cout<<"*";
				else
				cout<<" ";
			}
			else{
				if(i>=j && j>=n-i-1)
				cout<<"*";
				else
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
void pascaltriangle(){
    cout << "Enter a number:";
    cin >> n;
    vector <double> a;
    for(int i=1;i<=n;i++){
    vector <double> b(i);
    for(int k=n;k>=i;k--) {
        cout << " ";
    }
    for(int j=0;j<i;j++){
        if(j==0 || j==(i-1)){
        b[j]=1;
        }
        else{
        b[j]=a[j]+a[j-1];
        }
    cout << b[j]<<" ";    
    }
    a=b;
    cout << endl;
    }
}
void pyramid(){
	cout<<"Enter a number:";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<string(2*(n-i),' ');
		for(int j=0;j<=i*2;j++){
			if(j<=i)
			cout<<j+1;
			else
			cout<<2*i-j+1;
			cout<<" ";
		}
		cout<<endl;
	}
}
void snake(){
	cout << "Enter a number:";
    cin >> n;
    int c;
	for(int i=1;i<=n;i++){
		if(i%2==0){
			c=i*n;
			for(int j=0;j<n;j++)
				cout<<c--<<" ";
		}
		else{
			c=(i-1)*n+1;
			for(int j=0;j<n;j++)
				cout<<c++<<" ";
		}
		cout<<endl;
	}
}
void printMatrix(const vector<vector<int> >& a) {
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[i].size(); j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}
void fillSpiral(vector<vector<int> >& a, int n) {
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    int c = 1;
    while (top <= bottom && left <= right) {
        for (int j = left; j <= right; j++) {
            a[top][j] = c++;
        }
        top++;
        for (int i = top; i <= bottom; i++) {
            a[i][right] = c++;
        }
        right--;
        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                a[bottom][j] = c++;
            }
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                a[i][left] = c++;
            }
            left++;
        }
    }
}
void spiral() {
    cout << "Enter a number: ";
    cin >> n;
    vector<vector<int> > a(n, vector<int>(n, 0));
    fillSpiral(a, n);
    printMatrix(a); 
}
void X(){
	cout<<"Enter a number:";
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j || i==n-j-1)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}
}
int main(){
	int ch;
	while(1){
		menu();
		cout<<"Enter your choice(Enter any character to exit):";
		cin>>ch;
		switch(ch){
			case 1:
				diamond();
				break;
			case 2:
				hollowdiamond();
				break;
			case 3:
				downhill();
				break;
			case 4:
				hourglass();
				break;
			case 5:
				pascaltriangle();
				break;
			case 6:
				pyramid();
				break;
			case 7:
				spiral();
				break;
			case 8:
				X();
				break;
			case 9:
				snake();
				break;
			case 10:
				crossbox();
				break;
			case 11:
				character_bridge();
				break;
			case 12:
				hollow_hourglass();
				break;
			case 13:
				fractals_triangle();
				break;
			default:
				cout<<"\nThankyou!";
				exit(0);
		}
		cout<<endl;
	}
	getch();
}
