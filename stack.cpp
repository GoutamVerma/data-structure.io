#include<iostream>
using namespace std;
int stack[10],n=10,top=-1;
void push(int no){
	if(top>=n-1)
	{
		cout<<"\nStack Overflow"<<endl;
	}
	else{
		top++;
		stack[top]=no;
	}
}
void pop(){
	if(top<=-1)
		cout<<"\nStack Overflow";
	else{
		cout<<"\nThe Podded element  "<<stack[top];
		top--;
		}
	}
void display(){
	for(int i=0;i<top;i++){
		cout<<stack[i]<<"  ";
	}
}
int main(){
	int ch,val;
	cout<<"\n1) push in stack";
	cout<<"\n2) pop from stack";
	cout<<"\n3) Diplay stack";
	cout<<"\n4) Exit";
	do{
		cout<<"\nEnter Choice";
		cin>>ch;
		switch(ch){
			case 1:{
				cout<<"\nEnter value you want to push";
				cin>>val;
				push(val);
				break;
			}
			case 2:{
				pop();
				break;
			}
			case 3:{
				display();
				break;
			}
			case 4:{
				cout<<"\nExit"<<endl;
				break;
			}
			default:{
				cout<<"\nInvalid case";
				break;
			}
		}
	}
	while(ch!=4);{
		return 0;
	}
}

