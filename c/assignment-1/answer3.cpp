#include<iostream>
#include<string.h>
using namespace std;



int main() {

   int a,b;
   cout<<"enter two numbers you want to find prime numbers between"<<"\n";
   cin>>a>>b;
   cout<<"the prime numbers are ...."<<"\n";
   for(int i=a;i<= b ; i++)
   {
      bool isPrime = 1;
       for(int j=2;j<i;j++)
       {
           if(i%j==0)
           {
               isPrime=0;
           }
       }
       if(isPrime)
       {
           cout<<i<<"\n";
       }
   }
	return 0;
}
