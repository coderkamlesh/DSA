class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}

class SinglyLinkedList {
    Node head;

    // Insert at end
    public void insert(int data) {
        Node newNode = new Node(data);

        if (head == null) {
            head = newNode;
            return;
        }

        Node temp = head;

        while (temp.next != null) {
            temp = temp.next;
        }

        temp.next = newNode;
    }

    // Display list
    public void display() {
        Node temp = head;

        while (temp != null) {
            System.out.print(temp.data + " -> ");
            temp = temp.next;
        }

        System.out.println("null");
    }

    

    // Delete first occurrence of a value
    public void delete(int key) {

        if (head == null) {
            return;
        }

        if (head.data == key) {
            head = head.next;
            return;
        }

        Node prev = null;
        Node curr = head;

        while (curr != null && curr.data != key) {
            prev = curr;
            curr = curr.next;
        }

        if (curr != null) {
            prev.next = curr.next;
        }
    }
}



public class Main {
    public static void main(String[] args) {

        SinglyLinkedList list = new SinglyLinkedList();

        // Node head = new Node(10);

        // System.out.println(head);
        list.insert(10);
        // list.insert(20);
        // list.insert(30);


        // list.display();

        // list.delete(20);

        // list.display();
    }
}