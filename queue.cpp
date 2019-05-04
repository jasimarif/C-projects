#include<iostream>
using namespace std;
const int MAX=10;
class queue{
	private:
	
    int qu[MAX];
       public:
       	int top;
       	int temp;
    	queue() 
		 {	top=0; temp=0; 	}
    	void push(int var){
    		qu[top++]=var;
		}
		
		int pop(){
			
			return qu[temp++];
		}
};
int main()
{
	int n=10;
queue q1;
q1.push(66);
q1.push(22);
q1.push(33);
q1.push(44);

cout << q1.pop() <<endl;
cout << q1.pop() <<endl;
cout << q1.pop() <<endl;
cout << q1.pop() <<endl;		


}
