      #include<iostream.h>
      #include<conio.h>
      #include<stdlib.h>

      class Stack1
	 {
	   public:
	      int a[10];
	      int top,disp1;

	  Stack1()
	    {
	      top=-1;
	      disp1=0;
	    }
	      void push(int x)
		 {
		   if(top==10)
		     {
			cout<<"\n Stack is Overflow...";
		     }
		   a[++top]=x;
		 }
	      void pop()
		{
		  if(top==-1)
		    {
		      cout<<"\n Stack is Underflow...";
		    }

		    cout<<"Item Deleted from Stack.."<<a[top--];
		 }

		 void disp()
		   {
		      disp1=top;

		      for(;disp1>=0;disp1--)
			 {
			    cout<<" "<<a[disp1];
			 }
		    }
	     };

	     void main()
	       {
		Stack1 s;
		int choice,item;

		while(1)
		  {
		   clrscr();
		cout<<"\n1.Push\n";
		cout<<"\n2.Pop\n";
		cout<<"\n3.Disp\n";
		cout<<"\n4.Exit\n";
		cout<<"\n Enter Your Choice(1,2,3,4)::";
		cin>>choice;

		   switch(choice)
		     {
			case 1:
			  cout<<"\n Enter the element:";
			  cin>>item;
			  s.push(item);
			  getch();
			  break;
			case 2:
			   s.pop();
			    getch();
			    break;
			case 3:
			    s.disp();
			    getch();
			    break;
			case 4:
			     exit(0);
			  }
			}
		      }




