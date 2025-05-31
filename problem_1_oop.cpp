// Write a program that declares a class with one integer data member and two member unctions 
// in() and out() to input and output data in data member
#include<iostream>
using namespace std;
class num{
	public:
		int num1;
		void in(){
		cout<<"Enter your number: ";
			cin>>num1;
		}
		void out(){
			cout<<"your enter number is "<<num1;
	}
};
int main(){
	num a;
	a.in();
	a.out();
}
