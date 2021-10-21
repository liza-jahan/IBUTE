
#include <bits/stdc++.h>
using namespace std;

struct node {
    int info;
    node* link = NULL;
    node() {}
    node(int a)
        : info(a)
    {
    }
};



 //void deleteNode(node*& head, int v)
  //{


    //if (head == NULL) {
       // cout << "Element not present in the list\n";
      //  return;
   // }

   // if (head->info == v) {
       // node* t = head;
       // head = head->link;
       // delete (t);
      //  return;
   //// }
 //   deleteNode(head->link, v);
//}


void push(node*& head, int data)
{
    node* newNode = new node(data);
    newNode->link = head;
    head = newNode;
}


void output(node* head)
{

    if (head == NULL and cout << endl)
        return;
    cout << head->info << ' ';
    output(head->link);
}

int main()
{

    node* head = NULL;


    push(head, 1);
    push(head, 2);
    push(head, 3);
    push(head, 4);
    push(head, 5);


     output(head);
      printf(" Remove number list  : \n");
    push(head, 6);
    output(head);
    push(head, 7);
    output(head);

    return 0;
}
