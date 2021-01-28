#include<iostream>

int main(){
	int num,rev=0,rem;
	std::cout<<"Enter the number:";
	std::cin>>num;
	while(num!=0){
		rem = num%10;
		rev = rev*10+rem;
		num= num/10;
	}
	std::cout<<rev<<"\n";
}
