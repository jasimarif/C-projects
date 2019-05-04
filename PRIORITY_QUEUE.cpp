#include <iostream>
using namespace std;
const int MAX=5;
const int ALPH=5;
static char c[ALPH];
static int n[MAX];
class priority{
	public:
		int i;
		int j;
		int temp;
		int k;
		priority()
		{
			int j=0;
			k=0;
			temp=0;
			i=0;
		}
		void insert(int item, int priority)
		{
			for(int i=j;i<=MAX;i++)
			c[i]=item;
			j++;
			for(int x=k ;x<=MAX;x++)
			n[x]=priority;
			k++;
		}
		
		void priorityqueue()
		{
			for(int pass=0;pass<MAX;pass++)
			for(int i=0;i<MAX-1;i++) // -1 so that it doesnot compare itself with garbage value i 3 passes are required only
			{
			if(n[i]>n[i+1])
			{
			char temp= c[i];
			c[i]=c[i+1];
			c[i+1]=temp;
			int tempp= n[i];
			n[i]=n[i+1];
			n[i+1]=tempp;
			
			}
			}
			
		}
		void display()
		{
			for (int i=0; i<MAX; i++)
			cout <<c[i];
			cout << endl;
			for (int l=0; l<MAX; l++)
			cout <<n[l];
		}
};
int main()
{
	priority p1;
 	p1.insert('j',3);
 	p1.insert('a',1);
 	p1.insert('s',5);
 	p1.insert('i',2);
 	p1.insert('m',4);
 	p1.display();
 	p1.priorityqueue();	
 	cout <<endl;
 	p1.display();
}		
		
