#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
void recursion(int input, int count = 1)
{
      if (input<1)
          {
             cout<< "Number should be  more than zero (0).\n";
             return;
          }  
       
         
      for(int k=0; k < count; ++k)
        {
            cout <<" ";
        }
        
     cout << "This was written by call number " << count << endl;
     
     if(input != count)
     {
         recursion(input, count+1);
     }
          
     for(int m = 0; m < count; ++m)
     {
        cout <<" ";
     }
    cout <<"This ALSO written by call number " << count <<endl;
     return;
 }
 
 
 double sumover(int input)
    {
        if(input==0) //base case
        {
            return 0;
        }
        else{
            return (1.00 / input) + sumover(input - 1);
        }
    }
 
 
 
 int main(int argc, char **argv)
 {
     recursion(7);
     double out = sumover(7);
     cout<<out<<endl;
     return 0;
     
 }
