#include<iostream>
using namespace std;
int main()
{
	int b1; 
	int b2;
	int b4;
	int b8;
	int b16;
	int b32;
	int b64;
	int b128;
	int num;
	b1=0, b2=0, b4=0, b8=0, b16=0,b16=0,b32=0,b64=0,b128=0, num=0;
	cout<<"input your number from 1-128";
	cin>>num;
		if (num/128>1 || num/128==1 )
{
	b128=1;
	num=num%128;
}
	if (num/64>1 || num/64==1 )
{
	b64=1;
	num=num%64;
}
	if (num/32>1 || num/32==1 )
{
	b32=1;
	num=num%32;
}
	if (num/16>1 || num/16==1 )
{
	b16=1;
	num=num%16;
}
	if (num/8>1 || num/8==1 )
{
	b8=1;
	num=num%8;
}
	if (num/4>1 || num/4==1 )
{
	b4=1;
	num=num%4;
}
	if (num/2>1 || num/2==1 )
{
	b2=1;
	num=num%2;
}
	if (num/1>1 || num/1==1 )
{
	b1=1;
	num=num%1;

}
	cout<<"your binary code is ";cout<<b128;cout<<b64;cout<<b32;cout<<b16;cout<<b8;cout<<b4;cout<<b2;cout<<b1;
	return 0;
	}
