// Problem 3
// Write a class circle with one data member radius. Write three member functions get_radius() to 
// set radius value with parameter value, area() to display radius and circum() to calculate and 
// display circumference of circle.
#include<iostream>
#define PI 3.14159
using namespace std;

class circle{
	public:
		float radius;
		
		void get_radius(float r){
				radius=r;
			
			
				
			}
		
			void area(){
				cout<<"your area is "<<PI*radius*radius<<endl;
			}
		void circum(){
			cout<<"your circum frence is "<<2*PI*radius<<endl;
		}
			
		
	};
		int main(){
			circle c;
			c.get_radius(100);
			c.area();
			c.circum();
		}
