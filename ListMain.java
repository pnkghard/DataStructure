package linkedlist;

class ListMain {

	public static void main(String[] args) {
		SinglyList list = new SinglyList();
		list.print();
		list.addNodeLast(11);
		list.addNodeLast(12);
		list.addNodeLast(13);
		list.addNodeLast(14);
		list.addNodeLast(15);
		list.addNodeLast(16);
		list.addNodeLast(17);
		list.print();
		list.searchNode(14);
		list.delNode(13);
		list.print();
		list.addNodeFront(1);
		list.addNodeFront(2);
		list.addNodeFront(3);
		list.addNodeFront(4);
		list.addNodeFront(5);		
		list.print();
		list.delNode(5);
		list.delNode(17);
		list.delNode(11);
		list.print();
		list.addNodeMid(14, 19);
		list.addNodeMid(15, 21);
		list.addNodeMid(16, 26);
		list.addNodeMid(21, 29);
		list.addNodeMid(1, 31);
		list.print();
		list.sortList();
		list.print();		
		list.revPrint();
		System.out.println(list.countNodes());
	}

}
