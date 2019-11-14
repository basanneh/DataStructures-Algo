#include <iostream>
#include <string>
#include <array>
#define MAX 5
using namespace std;

class Stack{
    public:
        Stack()
        {
            top = -1;
            
            for(int i=0; i<MAX; i++)
            {
                arraySize[i] = 0;
            }
        }


        bool isEmpty()
        {
            if(top==-1)
                return true;
            else
                return false;
        }
         
         
        bool isFull()
        {
            if(top==MAX-1)
                return true;
            else
                return false;
        }  


        void push(int value)
        {
            if(isFull())
            {
                cout<<"Stack overflow"<<endl;
            }
            else
            {
                top++;
                arraySize[top]=value;
                cout<<value<<" pushed into the stack."<<endl;
            }
        }


        int pop()
        {
            if(isEmpty())
            {
                cout<<"Stack underflow..The stack is empty"<<endl;
                return 0;
            }
            else
            {
                int temp = arraySize[top];
                arraySize[top]=0;
                top--;
                return temp;
            }
        }
        
        
        int count()
        {
             return (top +1);
        }


        int peek(unsigned int position)
        {
            if(position > arraySize.size())
            {
                cout<<""<<endl;
                cout<<"The stack can only contain "<<arraySize.size()<<" values"<<endl;
                return 0;
            }
            else
            {
                if(isEmpty())
                {
                    cout<<"Stack is Empty"<<endl;
                    return 0;
                }
                else
                {
                    int value = arraySize[position];
                    return value;        
                }
            }
         }


        void display()
        {
            cout<<"All values in the stack are "<<endl;
            for(int i=MAX-1;i>=0;i--)
            {
                cout<<arraySize[i]<<"  ";
            }
        }

//        void change(unsigned int position, int value)
//        {
//            if(isEmpty())
//            {
//                cout<<"You can only make changes when the stack has one or more value in it."<<endl;
//            }
//            else if(position > arraySize.size())
//            {
//                cout<<"The stack can only store "<<arraySize.size()<<" values"<<endl;
//            }
//            else
//            {
//                int temp = arraySize[position];
//                arraySize[position]=value;
//                cout<<"The value at position "<<position<<" has been changed from "<<temp<< "to "<<value<<endl;
//                
//            }
//        }
        
    private:
        int top;
        //int arraySize[5];
        array<int,5> arraySize;
        
};


int main ()
{
    Stack s1;
    unsigned int option,position,value;
    do
    {        
        cout<<"\n What operation do you want to perform? Select option number or enter \"0\" to exit."<<endl;
        cout<<"1 -> Push"<<endl;
        cout<<"2 -> Pop"<<endl;
        cout<<"3 -> If stack is Empty"<<endl;
        cout<<"4 -> If Stack is Full"<<endl;
        cout<<"5 -> View value is a given position"<<endl;
        cout<<"6 -> Count"<<endl;
        //cout<<"7 -> Change a value in a given position"<<endl;
        cout<<"7 -> Display all values in the stack"<<endl;
        cout<<"8 -> Clear Screen"<<endl;
        cout<<""<<endl;
        cout<<"Enter Number: ";
        cin>>option;
        switch(option)
        {
              case 0:
                break;
                
            case 1:
                cout<<"Enter an item to push in the stack"<<endl;
                cin>>value;
                s1.push(value);
                break;
                
             case 2:
                cout<<"Pop Function called - Popped Value : "<<s1.pop()<<endl;
                break;
                
             case 3:
                if(s1.isEmpty())
                    cout<<"Stack is Empty"<<endl;
                else
                    cout<<"Stack is not Empty"<<endl;
                break;
                
             case 4:
                if(s1.isFull())
                    cout<<"Stack is Full"<<endl;
                else
                    cout<<"Stack is not Full"<<endl;
                break;
                
             case 5:
                cout<<"Enter position of item you want to peek: "<<endl;
                cin>>position;
                cout<<"Peek Funtion called - Value at position "<<position<<" is "<<s1.peek(position)<<endl;
                break;
                
             case 6:
                 cout<<"Count Function Called - Number of items in the Stack is : "<<s1.count()<<endl;
                break;
                
//             case 7:
//                cout<<"Change Function Called - "<<endl;
//                cout<<"Enter position of item you want to change : ";
//                cin>>position;
//                cout<<endl;
//                cout<<"Enter the value of item you want to change : ";
//                cin>>value;
//                s1.change(position,value);
//                break;
                
             case 7:
                cout<<"Display Function Called - "<<endl;
                s1.display();
                break;
                
             case 8:
                system("cls");
                break;
                
             default:
                cout<<"Enter from number 0-8"<<endl;
                break;
        }
    }while(option != 0);
    
    return 0;
}