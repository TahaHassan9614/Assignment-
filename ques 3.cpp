#include<iostream>

using namespace std;

void doubleArray(int alpha[],int beta[]);
void setInStock(int instock[10][4],int delta[]);
int main(){
	int instock[10][4];
	int alpha[20];
	int beta[20];
	int gamma[4]={11,13,15,17};
	int delta[10]={3,5,2,6,10,9,7,11,1,8};
	
	doubleArray(alpha,beta);
	setInStock(instock,delta);
}

void doubleArray(int alpha[],int beta[]){
	for(int i=0;i<20;i++){
		cout<<"Enter alpha["<<i<<"]:";
		cin>>alpha[i];
		beta[i]=alpha[i]*2;
	}
}
void setInStock(int instock[10][4],int delta[]){
	for(int i=0;i<10;i++){
		cout<<"Enter instock["<<i<<"][0]:";
		cin>>instock[i][0];
	}
	for(int i=1;i<4;i++){
		for(int j=0;j<10;j++){
			instock[j][i]=(instock[j][i-1]*2)-delta[j];
		}
	}
}
