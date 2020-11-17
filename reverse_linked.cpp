#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int info;
    node *next;
};
node *createnode(int ele)
{
    node *temp = new node;
    temp->info = ele;
    temp->next = NULL;
    return temp;
}
node* insert(node *ptr, node *root)
{
    if (root == NULL)
    {
        root = ptr;
        return root;
    }
    else
    {
        node *cur = root;
        while (cur->next != NULL)
            cur = cur->next;

        cur->next = ptr;
        return root;
    }
}
void display(node *root)
{
    node *cur = root;
    while (cur != NULL)
    {
        cout << cur->info << " ";
        cur = cur->next;
    }
    cout << "\n";
}
node* reverse(node* root)
{
    node * p=NULL;
    node* q=NULL;
    node* r=root;
    while(r!=NULL)
    {
        p=r;
        r=r->next;
        p->next=q;
        q=p;
    }
    root=q;
    return root;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cout<<"\n Enter the number of elements\n";
        cin >> n;
        int N=n;
        node *root = NULL;
        cout<<"\n Enter elements\n";
        while (n--)
        {
            int ele;
            
            cin >> ele;
            node *ptr = createnode(ele);
            root=insert(ptr, root);
        }
        display(root);
        root = reverse(root);
        display(root);
    }
}
