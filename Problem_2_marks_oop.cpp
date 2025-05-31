// Problem 2
// Write a class Marks with three data members to store three marks. Write three member 
// functions in() to input marks, sum() to calculate and return the sum and avg() to calculate and 
// return the average marks.

#include<iostream>
using namespace std;
class Marks{
	public:
		int eng;
		int urdu;
int math;
		void in(){
			cout<<" enter your  english marks: ";
			cin>>eng;
			cout<<" enter your  urdu marks: ";
			cin>>urdu;
			cout<<" enter your maths marks: ";
			cin>>math;
		}
		int sum(){
			int sum1 = eng+urdu+math;
			cout<<"your sum is "<<sum1<<endl;
			return sum1;
				}
		void av(){
			int  a=sum();
			int avrage = a/3;
			cout<<"your avrage marks are  "<<avrage;
			
		}
};
int main(){
Marks m;
m.in();
m.sum();
m.av();
	
}
