#include <iostream>
using namespace std;

struct node
{
	int data;
	node *next;
};

class linklist
{
	public:
		
	node *n;
	node *t;
	node *h;
	

linklist()
{


	
	h=NULL;
	
}
void addata(int x)
{
	node *n=new node;
	t=n;
	n->data= x;	

	n->next = h;
	h=n;
	
	
}

void display()
{
	node *current= h;
while(current!=NULL)
	{
		
		cout <<current->data <<endl;
		cout <<current->next <<endl;
	current= current->next;
	}
	
	 
}

};
int main()
{ 
	linklist l1;
	l1.addata(5);
	l1.addata(10);
	l1.display();
}
