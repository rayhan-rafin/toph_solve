#include<bits/stdc++.h>
using namespace std;

void createlist(int n, string pass);
void change (int n);
void display();

struct node
{
    char ch;
    struct node *next;
}*head;

int main ()
{
    string pass;
    cin>>pass;
    int n = pass.size();
    createlist(n,pass);
    change (n);
    display();
    return 0;
}

void createlist(int n,string pass)
{
    struct node *current,*newnode;
    head = (struct node*)malloc(sizeof(struct node));
    head->ch = pass[0];
    head->next = NULL;
    current = head;
    for (int i=1; i<n; i++)
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        current->next = newnode;
        current = newnode;
        current->ch = pass[i];
        current->next = NULL;
    }
}

void change (int n)
{
    struct node *current,*newnode;
    if ((head->ch)>'Z'){
        head->ch = (head->ch)-('a'-'A');
    }
    current = head;
    for (int i=0; i<n; i++)
    {
        if (current->ch == 's')
        {
            current->ch = '$';
        }
        else if (current->ch == 'i')
        {
            current->ch = '!';
        }
        else if (current->ch =='o')
        {
            current->ch = '(';
            newnode = (struct node*)malloc(sizeof(struct node));
            newnode->ch =')';
            newnode->next = current->next;
            current->next = newnode;
            current = newnode;
        }
        if (current->next==NULL){
            newnode = (struct node*)malloc(sizeof(struct node));
            current->next = newnode;
            newnode->ch = '.';
            newnode->next = NULL;
        }
        current = current->next;
    }
}

void display ()
{
    struct node *current;
    current = head;
    while (current!=NULL){
        cout<<current->ch;
        current = current->next;
    }
}
