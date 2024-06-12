#include<iostream>
using namespace std;
class Demo //class decleration
{
	public:
	      void Display(int x)      //fuction 1 , paramerters
		  {
			  cout<<"value of x is "<<x<<endl;
		  }
		  void Display(float x,float y)         //function 2 , different paramerters
		  {
			  cout<<"value of x is"<<x<<endl;
		  
		  }
		  void Display( int x ,int y,int z)   //function 3 , diff paramerters
		  {
			  cout<<"value of x and y is"<<x<<" ,"<<y<<endl;
		  }
};
         int main ()

                   {
                     Demo obj1;
                     //Demo obj2;
					//Demo obj3;
                     obj1.Display(92);
                     obj1.Display(7.8,7.5);
                     obj1.Display(100,200);
                     return 0;
				   }					 