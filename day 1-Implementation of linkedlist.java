package datastructures;

import java.util.*;
public class linkedlist {
	public class Node {
		public Integer data;
		public Node next;
		public Node(Integer data)
		{
		this.data=data;
		next=null;
		}

		}
	private Node header;
	private Node lastNode;
	private int size;
	
	public  linkedlist() {
		header=new Node(null);
		lastNode=header;
	}
	public void prepend(Integer data)
	{
		Node n=new Node(data);
		if(size==0)
		{
			header.next=n;
			lastNode=n;
			size++;
		}
		else
		{
			Node temp=header.next;
			header.next=n;
			header.next.next=temp;
			size++;
		}
	}
	public void append(Integer data)
	{
		Node n=new Node(data);
		if(size==0)
		{
			header.next=n;
			lastNode=n;
			size++;
		}
		else
		{
			lastNode.next=n;
			lastNode=n;
			size++;
		}	
		
	}
	public void removedfirst() {
		if(size!=0)
		{
		header.next=header.next.next;
		size--;}
		
	}public void removedlast() {
		if(size==1)
		{
		header.next=null;
		lastNode=header;
		size--;}
		else if(size!=0)
         		{
			Node n=header.next;
			int count=1;
			while(count!=size-1)
			{
				n=n.next;
				count++;
			}
			lastNode=n;
			lastNode.next=null;
			size--;
		}
		
	}
	public void insertAt(int index,Integer Data) {
		if(index<=0||index>size)
		{
			return;
		}
		else if(index==1) {
			prepend(Data);
		}
		else if(index==size) {
			append(Data);
		}
		else
		{
			Node n=new Node(Data);
			Node x=header.next;
			int count=1;
			while(count!=(index-1))
			{
				x=x.next;
				count++;
			}
			Node temp=x.next;
			x.next=n;
			n.next=temp;
			size++;
			
		}
	}
	public void removeAt(int index) {
		if(index<=0||index>size)
		{
			return;
		}
		else if(index==1) {
			removedfirst();
		}
		else if(index==size) {
		 removedlast();
		}
		else
		{
			Node n=header.next;
			int count=1;
			while(count!=index-1)
			{
				n=n.next;
				count++;
			}
			n.next=n.next.next;
			size--;
		}
	}
	public int getSize() {
		return size;
	}
	public String toString()
	{
		Node n=header.next;
		String temp="";
		while(n!=null)
		{
			temp=temp+n.data+" ";
			n=n.next;
		}
		return temp;
	}
	public boolean search(int x) 
    {
        Node current = header.next;    
        while (current != null) 
        { 
            if (current.data == x) 
                return true;   
            current = current.next; 
        } 
        return false;    
    } 
	private void deleteList() {
		 header.next = null; 
		
	}
	
public static void main(String args[]) {
	linkedlist list=new linkedlist();
	
	Scanner sc=new Scanner(System.in);
	System.out.println("enter elements");
	list.append(sc.nextInt());
	list.append(sc.nextInt());
	list.append(sc.nextInt());
	list.append(sc.nextInt());
	list.append(sc.nextInt());
	list.prepend(sc.nextInt());
	System.out.println("list created using append and prepend\n"+list);
	list.removedlast();
	list.prepend(9);
	list.append(10);
	list.insertAt(3, 5000);
	System.out.println(list.toString());
	list.removedfirst();
	
	System.out.println("after remove first and last\n"+list);
	list.removeAt(list.getSize());
	if (list.search(6)) 
        System.out.println("Yes"); 
    else
        System.out.println("No");
	list.deleteList(); 
	System.out.println("deleted list");
	
	list.prepend(1001);
	System.out.println("new list"+list.toString());
}

}