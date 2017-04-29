#include<iostream>
using name space std;
class staticfun
{
	static int count;
	public:
	static void setcount()
{
	count++;
 }
	void display()
{
	cout<<"count":<<count<<"\n";
}
};
	int staticfun:: count=10;
	int main()
{
	static fun ob;
	ob.set count(5);
	staticfun::setcount();
	ob.display();
	return();
}
