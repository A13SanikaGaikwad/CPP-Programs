//if not write virtual keyword then it is showing only base class attributes in derived classes
#include<iostream>
#include<string.h>
using namespace std;

class Communication
{
	char sendername[10];
	char receivername[10];
	
	public:
	//default constructor of communication
    Communication()
    {
    	strcpy(this->sendername,"not given");
    	strcpy(this->receivername,"not given");
	}
	//parameterised constructor of communication
	Communication(char* s,char* r)
	{
	    strcpy(this->sendername,s);
    	strcpy(this->receivername,r);
	}
	void set_sendername(char* s)
	{
		strcpy(this->sendername,s);
	}
	void set_receivername(char* r)
	{
		strcpy(this->receivername,r);
	}
	char* get_sendername()
	{
		return this->sendername;                                         
	}
	char* get_receivername()
	{
		return this->receivername;                                         
	}
    void display()
	{
		cout<<"\nSender Name is: "<<this->sendername;
		cout<<"\nReceiver Name is: "<<this->receivername;
	}
};
class Email : public Communication
{
	char senderemail[15];
	char receiveremail[15];
	public:
	//default constructor of email
    Email() : Communication()
    {
    	strcpy(this->senderemail,"not given");
    	strcpy(this->receiveremail,"not given");
	}
	//parameterised constructor of email
	Email(char* s,char* r,char* se,char* re) : Communication(s,r)
	{
	    strcpy(this->senderemail,se);
    	strcpy(this->receiveremail,re);
	}
	void set_senderemail(char* se)
	{
		strcpy(this->senderemail,se);
	}
	void set_receiveremail(char* re)
	{
		strcpy(this->receiveremail,re);
	}
	char* get_senderemail()
	{
		return this->senderemail;                                         
	}
	char* get_receiveremail()
	{
		return this->receiveremail;                                         
	}
   void display()
	{
		cout<<"\nEmail";
		Communication :: display();
		cout<<"\nSender Email is: "<<this->senderemail;
		cout<<"\nReceiver Email is: "<<this->receiveremail;
	}
};
class PostLetter : public Communication
{
	char senderaddress[15];
	char receiveraddress[15];
	public:
	//default constructor of PostLetter
    PostLetter() : Communication()
    {
    	strcpy(this->senderaddress,"not given");
    	strcpy(this->receiveraddress,"not given");
	}
	//parameterised constructor of Postletter
	PostLetter(char* s,char* r,char* sa,char* ra) : Communication(s,r)
	{
	    strcpy(this->senderaddress,sa);
    	strcpy(this->receiveraddress,ra);
	}
	void set_senderaddress(char*sa)
	{
		strcpy(this->senderaddress,sa);
	}
	void set_receiveraddress(char*ra)
	{
		strcpy(this->receiveraddress,ra);
	}
	char* get_senderaddress()
	{
		return this->senderaddress;                                         
	}
	char* get_receiveraddress()
	{
		return this->receiveraddress;                                         
	}
    void display()
	{
		cout<<"\nPostLetter";
		Communication :: display();
		cout<<"\nSender Address is: "<<this->senderaddress;
		cout<<"\nReceiver Address is: "<<this->receiveraddress;
	}
};
int main()
{
	Communication *c;
	Communication co1("soni","moni");
	c=&co1;
	c->display();
	cout<<"\n\n";
	
	Email e1("sona","mona","soni1@gmail","moni2@gmail");
	c=&e1;
	c->display();
	cout<<"\n\n";
	
	PostLetter p1("sonali","monali","Pune","Mumbai");
	c=&p1;
	c->display();
	cout<<"\n\n";
}
