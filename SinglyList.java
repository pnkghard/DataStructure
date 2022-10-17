package linkedlist;


import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;

class SinglyList {
	public Node head = null;
	public Node tail = null;
	
	public void addNodeLast(int val) { //add element to the end of list
		Node node = new Node(val);
		if(head==null) {
			head = tail = node;
		} else {
			tail.next = node;
			node.pre = tail; // additional
			tail = node;
		}
	}
	
	public void addNodeFront(int val) { // add element from starting of list
		Node node = new Node(val);
		if(head==null) {
			head = tail = node;
		} else {
			node.next = head;
			head = node;
		}
	}
	
	public void addNodeMid(int data, int val) { // add element in middle
		Node node = new Node(val);
		Node temp = head;
		if(head==null) {
			head = tail = node;
		} else {
			while(temp!=null) {
				if(temp.data==data) {
					node.next = temp.next;
					node.pre = temp; //additional
					temp.next = node;//additional
					//temp.next = node;
					break;
				}
				temp = temp.next;
			}
		}
	}
	
	public void print() { // print list
		
		Node temp = head;
		
		if(head==null) {
			System.out.println("List is empty...");
			return;
		}			
		
		System.out.print("Node List : ");
		while(temp!=null) {
			System.out.print(temp.data+"->");
			temp = temp.next;
		}
		System.out.println("null");
	}
	public void searchNode(int val) { //search element in list
		Node temp = head;		
		if(head==null) {
			System.out.println("List is empty...");
			return;
		}		
		int f = 0;
		while((temp!=null)&&(temp.data!=val)) {
			f++;
			temp = temp.next;
		}
		if(temp==null)
			System.out.println("No such element found...");
		else
			System.out.println(temp.data+" present on position "+(f+1)+" in list.");
	}
	
	public void delNode(int val) { // delete element in list
		
		Node temp = head, pre = null;
		
		if(head==null) {
			System.out.println("List is empty...");
			return;
		}
		while(temp!=null) {
			if(temp.data==val && temp==head) {
				head = temp.next;
				break;
			} else if(temp.data==val && temp.next==null) {
				pre.next = null;
				break;				
			} else if(temp.data==val) {
				pre.next = temp.next;
				break;
			}
			pre = temp;
			temp = temp.next;
		}
		if(temp==null)
			System.out.println("No such element found...");
	}
	
	public Node heads = null;
	public Node tails = null;
	
	public int countNodes() { // count list
		Node temp = head;
		int count = 0;
		while(temp!=null) {
			++count;
			temp = temp.next;
		}
		return count;
	}
	
	public void sortList() { //sorting list
		HashSet <Integer> list = new HashSet<>();
		Node temp = head;
		int i = 0;
		while(temp!=null) {
			list.add(temp.data);
			temp = temp.next;
		}
		for (Integer integer : list) {
			Node newNode = new Node(integer);
			if(heads==null) {
				heads = tails = newNode;
			} else {
				tails.next = newNode;
				newNode.pre = tails; // additional
				tails = newNode;
			}
		}
		head = heads;
	}
	
	public void revPrint() { //reverse print
		Node temp = tail;
		while(temp!=null) {
			System.out.print(temp.data+"->");
			temp = temp.pre;
		}
		System.out.println("null");
	}
}
