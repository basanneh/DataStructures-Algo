#include <stdio.h>
#include <iostream>
#define SIZE 6
using namespace std;
class Queue {
private:
    int front;
    int rear;
    int arr[SIZE];

public:
    Queue() //DEFAULT CONSTRUCTOR
    {
       front= -1;
       rear = -1;
       for(int i=0;i<SIZE;i++)
       {
           arr[i]=0;
       }
    }
    
    bool isEmpty()
    {
        if(front==-1 && rear == -1)
            return true;
        else 
            return false;
    }
    
    bool isFull()
    {
        if(rear == SIZE-1)
            return true;
        else
            return false;
    }
    
    int enqueue(int value)
    {
        if(isFull())
        {
            cout<<"The Queue is full"<<endl;
            return 0;
        }
        else if (isEmpty())
        {
            front = 0;
            rear= front;
            arr[front]= value;
        }
        else{
            rear++;
            arr[rear]= value;
        }
        return 0;
    }

    int dequeue()
    {
        int x = 0;
        if(isEmpty())
        {
            cout<<"The Queue is Empty."<<endl;
            return 0;
        }
        else if(front == rear)
        {
            x= arr[front];
            arr[front]=0;
            front = -1;
            rear = front;
            return x;
        }
        else
        {
            x = arr[front];
            arr[front]=0;
            front++;
            return x;
        }
        
    }
    int count()
    {
        return(rear-front+1);
    }
    
    void display()
    {
        for(int i=0; i<SIZE; i++)
        {
            cout<<arr[i]<<" ";
        }
    }

};

int main()
{
    Queue q1;
    int option;
    int value ;
	do
    {
        cout<<"\n\nWhat operation do you want to perform? Select Option number. Enter 0 to exit."<<endl;
        cout<<"1 -> Enqueue()"<<endl;
        cout<<"2 -> Dequeue()"<<endl;
        cout<<"3 -> isEmpty()"<<endl;
        cout<<"4 -> isFull()"<<endl;
        cout<<"5 -> count()"<<endl;
        cout<<"6 -> display()"<<endl;
        cout<<"7 -> Clear Screen()"<<endl;
        
        cin>>option;
        
        switch(option)
        {
            case 0:
                break;
            case 1:
                cout<<"Enqueue Operation \nEnter an item to Enqueue in the Queue"<<endl;
                cin>>value;
                q1.enqueue(value);
                break;
            case 2:
                cout<<"Dequeue Operation \nDequeue value : "<<q1.dequeue()<<endl;
                break;
            case 3:
                if(q1.isEmpty())
                    cout<<"Queue is Empty"<<endl;
                else
                    cout<<"Queue is not Empty"<<endl;
                break;
            case 4:
                if(q1.isFull())
                    cout<<"Queue is Full"<<endl;
                else
                    cout<<"Queue is not Full"<<endl;                
                break;
            case 5:
                cout<<"Count Operation \nNumber of items in the Queue is : "<<q1.count()<<endl;
                break;
            case 6:
                q1.display();
                break;
            case 7:
                system("cls");
                break;
            default:
                cout<<"Enter Number from 0-7";
                break;                
        };
    }while (option !=0);
	return 0;
}
