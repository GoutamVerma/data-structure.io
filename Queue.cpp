#include<iostream>
using namespace std;
class array{
	int arr[10],front,rear,max=10;
	public:
		array();
		void add(int);
		int remove();
		void display();
};
array::array(){
	front=-1;
	rear=-1;
}
void array::add(int u){
	if(rear==(max-1)){
		cout<<"Queue if full";
		exit(-1);
	}
	else{
		rear++;
		arr[rear]=u;
		if(front==-1){
			front=0;
		}
	}
}
int array::remove(){
	if(front==-1){
		cout<<"queue is empty";
	}
	else{
		int data=arr[front];
		arr[front]=0;
		if(front==rear)
			front=rear-1;
		else
			front++;
	
	return data;}
}
void array::display()
{
	for(int i=0;i<rear+1;i++)
		cout<<arr[i]<<" -> ";
	cout<<"\n";
}
int main(){
	array a1;
	a1.add(4);
	a1.add(5);
	a1.add(6);
	a1.add(7);
	a1.display();
	a1.remove();
	a1.display();
	return 0;
}
