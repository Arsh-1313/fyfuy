void push(int stack[],int top,int max,int x){  // X = DATA 
	if(top>=max-1){
		cout<<"overflow";
	}else{
		top++;
		stack[top]=x;
		cout<<x<<" pushed";
	}
}
void pop(int stack,int top){
	if(top<0){
		cout<<"stack underflow ";
	}
	else{
		int x=stack[top];
		top--;
	}
}
void peek(int stack,int top){
	if(top<0){
		cout<<"UNDERFLOW";
	}
	else{
		cout<<stack[top];
	}
}
void display(int stack,int top){
	if(top<0){
		cout<<"underflow";
	}
	else{
		for(int i=top;i>=0;i--){
			cout<<stack[i]<<" ";
		}
	}
}
void empty(int stack,int top){
	if(top<0){
		cout<<"EMPTY";
	}else{
		cout<<"NOT EMPTY";
	}
}
int main(){
	int data;
	int top=-1;
	int max;
	cin>>max;
	int stack[max];
	int choice;
	do{
		cout<<"1. Push function";
		cin>>choice;
		switch(choice){
			case 1:
				cin>>data;
				push(stack,top,max,data);
				break;
		}
	}while(choice>=1 && choice<6)
}
