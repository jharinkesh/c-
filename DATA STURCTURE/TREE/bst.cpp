#include<stdio.h>
#include<conio.h>

struct node
{
int data;
struct node *left;
struct node *right;

}*root=NULL;


node *insert(struct node *p,int val)
{

if(p==NULL)
{
p=new node;
p->left=p->right=NULL;
p->data=val;
}

else if(val<p->data)
p->left=insert(p->left,val);

else if(val>p->data)
p->right=insert(p->right,val);

else
printf("\n duplicate element not inserted");

return p;
}



void pre(struct node *p)
{
if(p!=NULL)
{
printf("%d ",p->data);
pre(p->left);
pre(p->right);

}
}

void post(struct node *p)
{
if(p!=NULL)
{
post(p->left);
post(p->right);
printf("%d ",p->data);

}
}
void in(struct node *p)
{
if(p!=NULL)
{
in(p->left);
printf("%d ",p->data);

in(p->right);

}
}



void main()
{
clrscr();
int data;
scanf("%d",&data);

while(data!=0)
{
root=insert(root,data);
scanf("%d",&data);
}

printf("\n preorder\n");
pre(root);

printf("\n\n");
printf("\n inorder\n");

in(root);
printf("\n\n");
printf("\n postorder\n");

post(root);
getch();

}


