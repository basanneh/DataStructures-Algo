#include <iostream>
#include <stdio.h>
using namespace std;
struct node {
    int data;
    node *next;
};

class linkedList
{
    private:
        node *head,*last;
        int size = 0;
    
    public:
        
        linkedList()
        {
            head = NULL;
            last = NULL;
        }
        
        void add_node(int value)
        {
            node *temp = new node;
            temp->data = value;
            temp->next =NULL;
            if(head == NULL)
                {
                    head = temp;
                    last = temp;
                }
            else
                {
                    last->next = temp;
                    last =temp;
                }
            size++;
        }
        

    void addNodeAtPos(int data, int pos)
    {
          node* prev = new node;
          node* curr = new node;
          node* newNode = new node;
          newNode->data = data;

          int tempPos = 0;   // Traverses through the list

          curr = head;      // Initialize current to head;
          if(head != NULL)
          {
                while(curr->next != NULL && tempPos != pos)
                {
                    prev = curr;
                    curr = curr->next;
                    tempPos++;
                }
                if(pos==0)
                {
                   cout << "Adding at Head! " << endl;

                    newNode->next = head;
                    head = newNode;
                }
                else if(curr->next == NULL && pos == tempPos+1)
                {
                  cout << "Adding at Tail! " << endl;

                    newNode->next = NULL;
                    last->next =newNode;
                    last = newNode;
                    
                }
                else if(pos > tempPos+1)
                  cout << " Position is out of bounds " << endl;
                 //Position not valid

                else
                {
                    prev->next = newNode;
                    newNode->next = curr;
                    cout << "Node added at position: " << pos << endl;
                }
         }
         else
             {
                head = newNode;
                newNode->next=NULL;
                cout << "Added at head as list is empty! " << endl;
             }
    }
                
        void display()
        {
            node *current;
            current = head;
            while(current != NULL)
            {
                cout<<current->data <<" ";
                current = current->next;
            }
            
            cout<<endl;
        }
        
        int count()
        {            
            return size;
        }
        
      static void concatenate(node *h1, node *h2)
        {
            
            if(h1 != NULL && h2 !=NULL)
            {
                if(h1->next == NULL)
                    h1->next = h2;
                else
                    concatenate(h1->next,h2);
            }
            else
            {
                cout <<"Either h1 or h2 is NULL\n";
            }
        }
        
        
        node* gethead()
        {
            return head;
        }
        
        void removeDuplicates() 
        { 
            node *ptr1, *ptr2, *duplicate; 
            ptr1 = head; 
          
            /* Pick elements one by one */
            while (ptr1 != NULL && ptr1->next != NULL) 
            { 
                ptr2 = ptr1; 
          
                /* Compare the picked element with rest 
                   of the elements */
                while (ptr2->next != NULL) 
                { 
                    /* If duplicate then delete it */
                    if (ptr1->data == ptr2->next->data) 
                    { 
                        /* sequence of steps is important here */
                        duplicate = ptr2->next; 
                        ptr2->next = ptr2->next->next; 
                        delete(duplicate); 
                    } 
                    else /* This is tricky */
                        ptr2 = ptr2->next; 
                } 
                ptr1 = ptr1->next; 
            } 
        } 
};

int main()
{
	linkedList list1;
    list1.add_node(25);
    list1.add_node(35);
    list1.add_node(45);
    list1.add_node(55);
    cout<<"List 1 is : ";
    list1.display();
    linkedList list2;
    list2.add_node(65);
    list2.add_node(75);
    list2.add_node(85);
    list2.add_node(95);
    list2.add_node(105);
    cout<<"List 2 is : " ;
    list2.display();
    cout<<"List 1 and 2 is : " ;
    linkedList::concatenate(list1.gethead(),list2.gethead());
    list1.display();
    int data = 12, pos = 1; 
    list2.addNodeAtPos(data, pos);
    data = 13, pos = 1; 
    list2.addNodeAtPos(data, pos);
    data = 14, pos = 0; 
    list2.addNodeAtPos(data, pos);
    list2.display();
    cout<<"----------------------List 3, Removing duplicates from a liked list.----------------------"<<endl;
    linkedList list3;
    list3.add_node(65);
    list3.add_node(75);
    list3.add_node(85);
    list3.add_node(65);
    list3.add_node(105);
    list3.add_node(95);
    list3.add_node(45);
    list3.add_node(75);
    list3.display();
    cout<<"Removing duplicates in the link list : \n";
    list3.removeDuplicates();
    list3.display();
    
   
	return 0;
}
