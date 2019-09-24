#include<iostream>
#include<cstdlib>
 struct node
{
	int info;
	struct node *link;
};

 node *create_list( node *start);
void display( node *start);
void count( node *start);
void search( node *start,int data);
 node *addatbeg( node *start,int data);
 node *addatend( node *start,int data);
 node *addafter( node *start,int data,int item);
 node *addbefore( node *start,int data,int item );
 node *addatpos( node *start,int data,int pos);
 node *del( node *start,int data);
 node *reverse( node *start);
 void countoccurence(node *start);
 void minmax(node *start);
 void copy(node *start);
 void reversecopy(node *start);
 void swap(node *start);
 void swaplink(node *start);
 void swapfirstlast(node *start);
 void linkswapfirstlast(node *start);
 void largest_value_at_last(node *start);
 void deletenodebylink(node *start);
 node *actualdeletebylink(node *value);
 void deleteeverynode(node *value);
 void bubble_sort(node *start);
 void remove_duplicate_sorted(node *start);
 void remove_duplicate(node *start);
 void compare_links(node *start);

using namespace std;
 int main(){
      node *start=NULL;	
	int choice,data,item,pos;
		
	while(1)
	{
		cout<<"1.Create List\n"<<endl;
		cout<<"2.Display\n"<<endl;
		cout<<"3.Count\n"<<endl;
		cout<<"4.Search\n"<<endl;
		cout<<"5.Add to empty list / Add at beginning\n"<<endl;
		cout<<"6.Add at end\n"<<endl;
		cout<<"7.Add after node\n"<<endl;
		cout<<"8.Add before node\n"<<endl;
		cout<<"9.Add at position\n"<<endl;
		cout<<"10.Delete\n"<<endl;
		cout<<"11.Reverse\n"<<endl;
		cout<<"12.countoccurence\n"<<endl;
		cout<<"13.min and max\n"<<endl;
		cout<<"14.copy\n"<<endl;
		cout<<"15.reversecopy\n"<<endl;
		cout<<"16.swap\n"<<endl;
		cout<<"17.linkswap\n"<<endl;
        cout<<"18.swapfirstlast\n"<<endl;
		cout<<"19.linkswapfirstlast\n"<<endl;
		cout<<"20.largestvalueatlast\n"<<endl;
		cout<<"21.deleteNodeByLink\n"<<endl;
		cout<<"22.deleteEveryNode\n"<<endl;
		cout<<"23.BubbleSort\n"<<endl;
		cout<<"24.remove duplicate value from sorted list\n"<<endl;
		cout<<"25.remove duplicate value\n"<<endl;
		cout<<"26.quit"<<endl;
		
		cout<<"Enter your choice : "<<endl;
		cin>>choice;
		
		switch(choice)
		{
		 case 1:
			start=create_list(start);
			break;
		 case 2:
			display(start);
			break;
		 case 3:
			count(start);
			break;
		 case 4:
			cout<<"Enter the element to be searched : "<<endl;
			cin>>data;
			search(start,data);
			break;
		 case 5:
			cout<<"Enter the element to be inserted : "<<endl;
			cin>>data;
			start=addatbeg(start,data);
			break;
		 case 6:
			cout<<"Enter the element to be inserted : "<<endl;
			cin>>data;
			start=addatend(start,data);
			break;
		 case 7:
			cout<<"Enter the element to be inserted : "<<endl;
			cin>>data;
			cout<<"Enter the element after which to insert : "<<endl;
			cin>>item;
			start=addafter(start,data,item);
			break;
		 case 8:
			cout<<"Enter the element to be inserted : "<<endl;
			cin>>data;
			cout<<"Enter the element before which to insert : "<<endl;
			cin>>item;
			start=addbefore(start,data,item);
			break;
		 case 9:
			cout<<"Enter the element to be inserted : "<<endl;
			cin>>data;
			cout<<"Enter the position at which to insert : "<<endl;
			cin>>pos;
			start=addatpos(start,data,pos);
			break;
		 case 10:
			cout<<"Enter the element to be deleted : "<<endl;
			cin>>data;
			start=del(start, data);	
			break;
		 case 11:
			start=reverse(start);
			cout<<endl;
			break;
		 case 12:
			countoccurence(start);
			cout<<endl;
			break;
		 case 13:
			minmax(start);
			cout<<endl;
			break;
		case 14:
			copy(start);
			cout<<endl;
			break;
        case 15:
			copy(start);
			cout<<endl;
			break;
		 case 16:
			  swap(start);
			 break;
		 case 17:
			 swaplink(start);
			 break;
		case 18:
		      swapfirstlast(start);
			 break;
	     case 19:
		      linkswapfirstlast(start);
			 break;
		 case 20:
		      largest_value_at_last(start);
			 break;
		 case 21:
		      deletenodebylink(start);
			 break;
		 case 22:
		     // deleteeverynode(start);
			 break;
		 case 23:
			bubble_sort(start);
			break;
		 case 24:
			remove_duplicate_sorted(start);
			break;
		case 25:
			remove_duplicate(start);
			break;
		case 26:
			 exit(1);
		 default:
			 cout<<"Wrong choice\n"<<endl;
		}/*End of switch */
	}/*End of while */
    return 0;
}/*End of main()*/

node* create_list(node *start){

  int data,i,n;
  cout<<"enter number of data u wanna store"<<endl;
  cin>>n;
  start = NULL;
  if(n==0)
    return start;

	cout<<"Enter the element to store "<<endl;
	cin>>data;
	start = addatbeg(start,data);

	for(i=2;i<=n;i++){
        cout<<"Enter the element to store "<<endl;
		cin>>data;
		start = addatend(start,data);
	}
	return start;
   
}


void display( node *start)
{
	
	 node *p;
	 int i=0;
	if(start==NULL)
	{
	      cout<<"List is empty\n"<<endl;
		return;
	}
	p=start;
      cout<<"List is :\n"<<endl;
	while(p!=NULL)
	{
	      cout<<++i<<" "<<p->info<<endl;
		p=p->link;
	}
      cout<<"\n\n"<<endl;
}/*End of display() */

void count( node *start)
{
	 node *p;
	int cnt=0;
	p=start;
	while(p!=NULL)
	{
		p=p->link;
		cnt++;
	}
      cout<<"Number of elements are \n"<<cnt<<endl;
}/*End of count() */

void search( node *start,int item)
{
	 node *p=start;
	int pos=1;
	while(p!=NULL)
	{
		if(p->info==item)
		{
		      cout<<"Item " <<item<<" found at position "<<pos<<endl;
			return;
		}
		p=p->link;
		pos++;
	}
      cout<<item<<" Item %d not found in list "<<endl;
}/*End of search()*/

 node *addatbeg( node *start,int data)
{
	 node *tmp;
	tmp=new node;
	tmp->info=data;
	tmp->link=start;
	start=tmp;
	return start;
}/*End of addatbeg()*/

 node *addatend( node *start,int data)
{
	 node *p,*tmp;
	tmp=new node;
	tmp->info=data;
	p=start;
	while(p->link!=NULL)
		p=p->link;
	p->link=tmp;
	tmp->link=NULL;
	return start;
}/*End of addatend()*/

 node *addafter( node *start,int data,int item)
{
	 node *tmp,*p;
	p=start;
	while(p!=NULL)
	{
		if(p->info==item)
		{
			tmp=new node;
			tmp->info=data;
			tmp->link=p->link;
			p->link=tmp;
			return start;
		}
		p=p->link;
	}
      cout<<item<<" not present in the list\n"<<endl;
	return start;
}/*End of addafter()*/

 node *addbefore( node *start,int data,int item)
{
	 node *tmp,*p;
	if(start==NULL )
	{
	      cout<<"List is empty "<<endl;
		  return start;
	}	
	/*If data to be inserted before first node*/
	if(item==start->info)
	{
		tmp=new node;
		tmp->info=data;
		tmp->link=start;
		start=tmp;
		return start;
	}	
	p=start;
	while(p->link!=NULL) 
	{
		if(p->link->info==item)
		{
			tmp= new node;
			tmp->info=data;
			tmp->link=p->link;
			p->link=tmp;
			return start;
		}
		p=p->link;
	}
      cout<<item<<" not present in the list "<<endl;
	return start;
}/*End of addbefore()*/	

 node *addatpos( node *start,int data,int pos)
{
	 node *tmp,*p;
	int i;
	tmp=new node;
	tmp->info=data;
	if(pos==1)
	{
		tmp->link=start; 
		start=tmp;
		return start;
	}
	p=start;
	for(i=1; i<pos-1 && p!=NULL; i++)
		p=p->link;
	if(p==NULL)
	      cout<<"There are less than "<<pos<<" elements\n"<<endl;
	else
	{
		tmp->link=p->link;
		p->link=tmp;
	}	
	return start;
}/*End of addatpos()*/

 node *del( node *start,int data)
{
	 node *tmp,*p;
	if(start==NULL)
	{
	      cout<<"List is empty\n"<<endl;
		return start;
	}
	/*Deletion of first node*/
	if(start->info==data)
	{
		tmp=start;
		start=start->link;  
		delete(tmp);
		return start;
	}
	/*Deletion in between or at the end*/
	p=start;
	while(p->link!=NULL)
	{
		if(p->link->info==data)   
		{
			tmp=p->link;
			p->link=tmp->link;
			delete(tmp);
			return start;
		}
		p=p->link;
	}
      cout<<"Element %d not found\n"<<data<<endl;
	return start;
}/*End of del()*/

 node *reverse( node *start)
{
	 node *prev, *ptr, *next;
	prev=NULL;
   	ptr=start;
	while(ptr!=NULL)
	{
		next=ptr->link;
		ptr->link=prev;
		prev=ptr;
		ptr=next;
	}
	start=prev;
	return start;
}/*End of reverse()*/

void countoccurence(node* start){ 
	int count,data;
    node *tmp,*par;
	par = start;
	while(par != NULL){
		count = 0;
		tmp = start;
		data = par->info;
		while(tmp != NULL)
		{
          if(tmp->info == data)
		    count++;
			tmp = tmp->link;
		}
		cout<<par->info<<" : "<<count<<endl;
		par = par->link;
	}
}

void minmax(node *start){
 	node *tmp = start;
	int min, max;
	min = tmp->info;
	max = tmp->info;
	while(tmp != NULL){
      if(min <= tmp->info);
	  else{
		  min = tmp->info;
	  }
	  if(max >= tmp->info);
	  else{
		  max = tmp->info;
	  }
	  tmp = tmp->link;
	}
	cout<<"Minimum : "<<min<<" Maximum : "<<max<<endl;
}
//code for coping single list into another list
void copy(node* start){
	node *tmp = start;
	node *par = NULL;
	node *ptr,*ptr1;
	if(start == NULL){
		cout<<"The intial list is empty"<<endl;
		return;
	}
	else{
		par = new node();
		par->info = start->info;
		par->link = NULL;
	}
	ptr1 = par;
	ptr = par;
	tmp = tmp->link;
	 //ptr will have the link for first node
	while(tmp != NULL)
	{
		par = new node();
		par->info = tmp->info;
		ptr->link = par;
		ptr = ptr->link;
		tmp = tmp->link;
	}
	
	 node *p;
	 int i=0;
	if(start==NULL)
	{
	      cout<<"List is empty\n"<<endl;
		return;
	}
	p=ptr1;
      cout<<"List is :\n"<<endl;
	while(p!=NULL)
	{
	      cout<<++i<<" "<<p->info<<endl;
		p=p->link;
	}
      cout<<"\n\n"<<endl;
}

void reversecopy(node *start){
     node *tmp = start;
	 node *duplicate = NULL;
	 node *par;
	 int data;
	 if(start == NULL)
	 {
		 cout<<"The initial node is empty"<<endl;
		 return;
	 }
	 else{
		 duplicate = new node();
		 duplicate->info = tmp->info; //assigning the last value of start list in node
		 duplicate->link = NULL; 
	 }
	 tmp = start->link;
	 while(tmp != NULL){
        data = tmp->info;
        par = new node();
		par->info = data;
		par->link = duplicate;
		duplicate = par;
	
		tmp = tmp->link;
	 }
	 
	  node *p;
	 int i=0;
	if(duplicate==NULL)
	{
	      cout<<"List is empty\n"<<endl;
		return;
	}
	p=duplicate;
      cout<<"List is :\n"<<endl;
	while(p!=NULL)
	{
	      cout<<++i<<" "<<p->info<<endl;
		p=p->link;
	}
      cout<<"\n\n"<<endl;
}
//swaping adgecent values
void swap(node* start){
   node *tmp = start;
   int data,data2;
   while(tmp->link != NULL){
	  data = tmp->info;
	  if(tmp->link != NULL){
	   data2 = tmp->link->info;
	   tmp->link->info = data;
	   tmp->info = data2;}
	   else 
	      break;

      tmp = tmp->link->link;
   }
   
}
//not working properly
void swaplink(node *start){
	node *first,*second,*tmp;
	tmp = start;
	while(tmp->link != NULL){
		first = tmp->link;              //for very first iteration we are taking the address of first node; and
		second = tmp->link->link; // we are not interested in address on first node because it will point to second node only
		tmp->link = second;  
		tmp->link->link = tmp;
		tmp = first;
		tmp = tmp->link;
	}
	cout<<"Hello completed"<<endl;
	
}
//programm to swap first and last element
void swapfirstlast(node *start){
   node *tmp = start;
   node *par = start;
   int first;
   int second;
   if(tmp == NULL)
    {
		cout<<"The list is empty"<<endl;
		return;
	}
	else{
       first = tmp->info;
	}
	tmp = tmp->link;
	while(tmp->link!=NULL)
	 tmp = tmp->link;
    second = tmp->info;
	tmp->info = first;
	par->info = second;
	

    node *p;
	 int i=0;
	if(start==NULL)
	{
	      cout<<"List is empty\n"<<endl;
		return;
	}
	p=start;
      cout<<"List is :\n"<<endl;
	while(p!=NULL)
	{
	      cout<<++i<<" "<<p->info<<endl;
		p=p->link;
	}
      cout<<"\n\n"<<endl;
}
//program to swap first and last  link
void linkswapfirstlast(node *start){
	node *tmp = start;
	node *first,*second;
	if(tmp == NULL)
	{
		cout<<"The list is empty"<<endl;
		return;
	}
	else
	{
		first = tmp->link;
		second = tmp;
		while(tmp->link != NULL)
		  tmp = tmp->link;

		  tmp->link->link = first;
		  start = tmp->link;
		  tmp->link = second;
	}
	
	node *p;
	 int i=0;
	if(start==NULL)
	{
	      cout<<"List is empty\n"<<endl;
		return;
	}
	p=start;
      cout<<"List is :\n"<<endl;
	while(p!=NULL)
	{
	      cout<<++i<<" "<<p->info<<endl;
		p=p->link;
	}
      cout<<"\n\n"<<endl;
}

void largest_value_at_last(node *start)
{
	node *tmp = start;
	int max;
	if(tmp == NULL){
		cout<<"The list is empty"<<endl;
		return;
	}
	else{
		max = tmp->info;
		while(tmp->link != NULL){
			if(max < tmp->info)
			 max = tmp->info;
			 tmp = tmp->link;
		}
		start = del(start,max);
		start = addatend(start,max);
	}
  
  node *p;
	 int i=0;
	if(start==NULL)
	{
	      cout<<"List is empty\n"<<endl;
		return;
	}
	p=start;
      cout<<"List is :\n"<<endl;
	while(p!=NULL)
	{
	      cout<<++i<<" "<<p->info<<endl;
		p=p->link;
	}
      cout<<"\n\n"<<endl;

}

void deletenodebylink(node *start){
	node *tmp = start;
	while(tmp->link!=NULL)
	{
		if(tmp->info == 8){
		tmp->link = actualdeletebylink(tmp->link);
		break;
		}
		tmp = tmp->link;

	}
	//display function goes hear
	node *p;
	 int i=0;
	if(start==NULL)
	{
	      cout<<"List is empty\n"<<endl;
		return;
	}
	p=start;
      cout<<"List is :\n"<<endl;
	while(p!=NULL)
	{
	      cout<<++i<<" "<<p->info<<endl;
		p=p->link;
	}
      cout<<"\n\n"<<endl;
}

node *actualdeletebylink(node *value){
	node *tmp ;
	if(value->link != NULL){
		tmp = value->link;
		free(value);
		return tmp;
	}
	else{
		free(value);
		return NULL;
	}
}
/* 
void deleteeverynode(node *start){
	node *tmp,*par;
	tmp = start;
	while(tmp != NULL){
		del(tmp,tmp->info);
		/* par = tmp->link;
		delete(tmp);
		tmp = par;
		tmp = start;
	}
		
}
 */

void bubble_sort(node *start){
	node *tmp = start;
	node *par = start;
	int temp;
	while(par->link!=NULL){
		tmp = start;
	while(tmp->link != NULL){
		if(tmp->info > tmp->link->info){
			temp = tmp->info;
			tmp->info = tmp->link->info;
			tmp->link->info = temp;
		}
		tmp = tmp->link;
	}
	par = par->link;
	}
}

void remove_duplicate_sorted(node *start){
	bubble_sort(start);
	node *tmp = start;
	while(tmp->link != NULL){
		if(tmp->info == tmp->link->info){
			del(start,tmp->link->info);
		}
		tmp = tmp->link;
	}
}

void remove_duplicate(node *start){
	node *tmp = start;
	node *par;
	int data;
	while(tmp->link != NULL){
		data = tmp->info;
		par = start;
		while(par->link != NULL){
			if((data == par->info) && (par->link != tmp->link))
			 del(start,data);
			 par = par->link;
		}
		tmp = tmp->link;
	}
}

void compare_links(node *start){
	node *tmp;
	tmp = start;
	if(tmp->link->link == start->link){
		
	}
}
