#include<iostream>
using namespace std;



int permutation(int n, int r)

{  
   if(n<=0)
   {
   	 throw n;
   }
   if(r<0)
   {
   	throw r;
   }
   if(r>n)
   {
   	 throw "Exception:: Value of r is greater than n. r must be less than or equal to n.";
   }
   if(r==0)
    return 1;
   else		
   return n*permutation(n-1,r-1);
   
    

}



int combination(int n, int r)

{
   if(n<=0)
   {
   	 throw n;
   }
   if(r<0)
   {
   	throw r;
   }
  if(r>n)
   {
   	 throw "Exception:: Value of r is greater than n. r must be less than or equal to n.";
   } 	
  if(r==0)
   return 1;
  else
   return ((n*combination(n-1,r-1))/r);

}



int main()

{
	int n;
	int r;
	
	cout<<"Enter the number whose permutation needs to be done::";
	cin>>n;
	cout<<"Enter the number on which permutation will happen::";
	cin>>r;
	
	try
	{
		int result=permutation(n,r);
	    cout<<"The result obtained after permutation is::"<<result<<endl;
	    int result2=combination(n,r);
	    cout<<"The result obtained after combination is::"<<result2;
	}
	catch(int i)
	{
		cout<<"Error: Number entered is negative or zero.";
	}
	catch(const char* str)
	{
		cout<<str;
	}
	

  return 0;

}
