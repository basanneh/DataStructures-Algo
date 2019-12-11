//  test -= and - on bag
/*
    This program will print informative messages if something goes wrong
    in either creating and filling bags or in getting the diffference
    between bags.

    If all goes well, only the final message prints.

*/

#include "bag3.h"
#include <iostream>
#include "node1.h"
#include "check_lists.h"

using namespace std;
using namespace main_savitch_5;

void list_print(node *head_ptr)
{
    cout << "{";
    for(nodep temp= head_ptr; temp != NULL; temp = temp->link())
        cout << temp->data() << " ";
    cout << "}" << endl;
}

int main() {
    int size = 5;
    // how many of each value to put in each bag
    // one 0 will be put in b1
    // two 1's will be put in b1
    // five 0's will be in b2 ...
    int num1[] = {1, 2, 3, 4, 5};
    int num2[] = {5, 4, 3, 2, 1};
    bag b1;
    bag b2;
    // insert data into bags
    for(int i = 0; i < size; i++ ) {
        for(int j = 0; j < num1[i]; j++) {
            b1.insert(i);
        }
        for(int j = 0; j < num2[i]; j++ ) {
            b2.insert(i);
        }
    }
    for(int i = 0; i < size; i++ ) {
        if(num1[i] != b1.count(i)) {
            cout <<  "value  " << i << " has bad count in b1: "
                << b1.count(i) << " rather than " << num1[i] << endl;
        }
        if(num2[i] != b2.count(i)) {
            cout <<  "value  " << i << " has bad count in b2: "
            << b2.count(i) << " rather than " << num2[i] << endl;
        }
    }
    bag b3 = b1 - b2;
    for(int i = 0; i < size; i++ ) {
        int d = num1[i] - num2[i];
        d = (d >= 0) ? d : 0;
        if(b3.count(i) != d) {
            cout <<  "value  " << i << " has bad count in b3: "
            << b3.count(i) << " rather than " << d << endl;
        }
    }

    b1 -= b1;
    for(int i = 0; i < size; i++ ) {
        if(0 != b1.count(i)) {
            cout <<  "value  " << i << " has bad count in b1: "
            << b1.count(i) << " rather than " << 0 << endl;
        }
    }


    cout << "no news is good news!" << endl;
    //Part two

    node *head_ptr= NULL;
    list_head_insert(head_ptr, 23.5);
    list_head_insert(head_ptr, 45.6);
    list_head_insert(head_ptr, 67.7);
    list_head_insert(head_ptr, 89.8);
    list_head_insert(head_ptr, 12.9);
    list_print(head_ptr);
    check_list1(head_ptr);


    node *head= NULL;
    list_head_insert(head, 23.5);
    list_insert(head, 45.6);
    node *tail = head->link();
    list_insert(tail, 67.7);
    tail = tail->link();
    list_insert(tail, -123.5);
    tail = tail->link();
    list_insert(tail, 89.8);
    tail = tail->link();
    list_insert(tail, 12.9);
    list_print(head);
    check_list2(head);

    node *head2;
    node *tail2;
    list_copy(head_ptr, head2, tail2);
    list_print(head2);
    check_list1(head2);
    list_print(tail2);

    list_head_remove(head);
    list_print(head);
    check_list2B(head);

    list_remove(head->link());
    list_print(head);
    check_list2C(head);

}

    


