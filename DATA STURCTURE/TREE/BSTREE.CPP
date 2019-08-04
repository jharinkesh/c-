//PROGRAM FOR BST
//DEVELOPED BY BABA TECHNOLOGIES
#include<iostream.h>
#include<conio.h>
struct bstree
{
int data;
struct bstree *lchild,*rchild;
}*root=NULL;

class tree
{
  public:
	void buildtree(int num)
	{
		insert(&root,num);
	}
	void insert(struct bstree **r,int num)
	{
		if(*r==NULL)
		{
			*r= new bstree;
			(*r)->lchild=NULL;
			(*r)->rchild=NULL;
			(*r)->data=num;
		}
		else
		{
		if(num<(*r)->data)
			 insert((&(*r)->lchild),num);
		else
			 insert((&(*r)->rchild),num);
		}

	}

	void traverse()
	{         cout<<endl<<"inorder:";           //BABA TECHNOLOGIES
	inorder(root);
	cout<<endl<<"preorder:";
	 preorder(root);
	 cout<<endl<<"postorder:";
	 postorder(root);
	}
		void inorder(struct bstree *r)
		{
		if(r!=NULL){
		inorder(r->lchild);
		cout<<r->data<<" ";
		inorder(r->rchild);
		}}
		void postorder(struct bstree *r)
		{
		if(r!=NULL)
		{

		postorder(r->lchild);
		postorder(r->rchild);
		cout<<r->data<<" ";
		} }
		void preorder(struct bstree *r)
		{
		if(r!=NULL){
		cout<<r->data<<" ";
		preorder(r->lchild);
		preorder(r->rchild);
		}       }

};


void main()
{
int n,value;
clrscr();
cout<<"how many root do u want to insert";
cin>>n;
tree t;
while(n>0)
{
cout<<"enter node value";
cin>>value;
t.buildtree(value);
n--;
}
t.traverse();
getch();
}

//ALL RIGHTS RESERVED BABA TECHNOLOGIES,BHOPAL 07898223036