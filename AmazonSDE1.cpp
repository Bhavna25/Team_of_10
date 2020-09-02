#include <bits/stdc++.h>
using namespace std;
struct node {
int data;
struct node *next;
};
struct node * new_node(int data)
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}
void print_list(struct node *root)
{
    while (root != NULL)
    {
        cout << root->data << " => ";
        root = root ->next;
    }
    cout << endl;
}
struct node *get_list(struct node* root)
{
    if(root == NULL)
        return NULL;
    int cnt = 0;
    struct node *temp = root;
    root->next = get_list(root->next);
    //print_list(root);
    while(temp != NULL)
    {
        cnt = cnt + temp->data;
        if(cnt == 0)
        {
            cout << " found place to redcue" << endl;
            if (temp->data == root->data)
                root = temp->next;
            else
                root = temp->next;
        }
        temp = temp->next;
    }
    return root;
}
int main()
{
    struct node *head,*temp;
    head = new_node(4);
    temp = head;
    temp->next = new_node(6);
    temp = temp->next;
    temp->next = new_node(-10);
    temp = temp->next;
    temp->next = new_node(8);
    temp = temp->next;
    temp->next = new_node(9);
    temp = temp->next;
    temp->next = new_node(10);
    temp = temp->next;
    temp->next = new_node(-19);
    temp = temp->next;
    temp->next = new_node(10);
    temp = temp->next;
    temp->next = new_node(-18);
    temp = temp->next;
    temp->next = new_node(20);
    temp = temp->next;
    temp->next = new_node(25);
    temp = temp->next;
    print_list(head);
    struct node *final = get_list(head);
    print_list(final);
}
