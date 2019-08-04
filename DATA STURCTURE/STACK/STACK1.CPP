       #include<iostream.h>
       #include<conio.h>

       struct node
	  {
	    int data;
	    struct node *link;
	  }*top=NULL,*top1=NULL;
       class stack1
	 {
	  public:

	     void push()
		{
		  int p;
		  char ch;
		struct node *n1;
		  if(top==NULL)
		     {
		       n1=new node;
		       cout<<"\nEnter the data:";
		       cin>>p;
		       n1->data=p;
		       n1->link=NULL;
		       top=n1;
		       top1=n1;
		    }
		   cout<<"\nDo You want to insert more data:";
		   cin>>ch;

		   while(ch!='n')
		     {
		       n1=new node;
		       cout<<"\nEnter the data:";
		       cin>>p;
		       n1->data=p;
		       top->link=n1;
		       n1->link=NULL;
		       top=n1;
		       cout<<"\nDo you want to enter more data:";
		       cin>>ch;
		     }

		     }
	     void disp()
	       {
		  struct node *n1;
		   n1=top1;
		  while(n1->link!=NULL)
		    {
		      cout<<n1->data<<"->";
		      n1=n1->link;

		    }
		 cout<<n1->data;

		    }

		void pop()
		    {
		      struct node *n1,*temp;
		      n1=top1;
		      while(n1->link!=NULL)
			 {
			  temp=n1;
			  n1=n1->link;
			 }
			 temp->link=NULL;
			 delete(n1);
		   }

	       };


	       void main()
		 {
		 clrscr();
		   stack1 s;
		   s.push();
		   s.disp();
		   s.pop();
		   s.pop();
		   s.disp();
		   getch();
		 }





