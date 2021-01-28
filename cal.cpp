#include<iostream>

int main(){
	int fn,sn;
	char op;
	do{
		std::cout<<"Enter the first number:";
		std::cin>>fn;
		std::cout<<"enter the operator:";
		std::cin>>op;
		std::cout<<"Enter the second number:";
		std::cin>>sn;
		switch(op){
			case '+':
			std::cout<<fn+sn<<"\n";
			break;
			case '-':	
			std::cout<<fn-sn<<"\n";
			break;
			case '*':
			std::cout<<fn*sn<<"\n";
			break;
			case '/':
			std::cout<<fn/sn<<"\n";
			break;
			default:
			std::cout<<"Invalid input";
			break;
		}
	}
	while(true);
}
