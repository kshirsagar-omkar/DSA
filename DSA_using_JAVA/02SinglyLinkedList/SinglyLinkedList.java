import java.util.InputMismatchException;
import java.util.Scanner;

class Node{
    public Integer data;
    public Node next;

    public Node(Integer data){
        this.data = data;
        this.next = null;
    }
}

public class SinglyLinkedList {
    private Node head;
    private Integer length;

    public SinglyLinkedList() {
        this.head = null;
        this.length = 0;
    }

    public Integer getLength() {
        return length;
    }

    public Node getHead() {
        return head;
    }


//    EXECUTION==================================================================================================================


    public static void main(String[] args) {
        SinglyLinkedList list = new SinglyLinkedList();

        list.create(3);
        list.display();
        System.out.println(list.getLength());
    }















//    CREATE==================================================================================================================

    public void create(Integer n) {

        if (n <= 0) {
            System.out.println("List size must be greater than 0.");
            return;
        }

        try (Scanner sc = new Scanner(System.in)) {
            System.out.print("Enter Data : ");
            head = new Node(sc.nextInt());
            ++length;
            Node temp = head;

            for (int i = 2; i <= n; ++i) {
                System.out.print("Enter Data : ");
                temp.next = new Node(sc.nextInt());
                ++length;
                temp = temp.next;
            }

        } catch (InputMismatchException e) {
            // Handle specific input mismatch exception
            System.out.println("Invalid input. Please enter an integer.");
        } catch (Exception e) {
            // General exception handling
            System.out.println(e.getMessage());
            e.printStackTrace();
        }
    }




//    DISPLAY==================================================================================================================


    public void display(){
        Node curr = head;
        while(curr != null){
            System.out.print(curr.data + " -> ");
            curr = curr.next;
        }
        System.out.println("NULL");
    }




//    ADD_AT_HEAD==================================================================================================================

    public void addAtHead(int data){
        Node newNode = new Node(data);
        newNode.next = head;
        head = newNode;
        ++length;
    }




//    ADD_AT_TAIL==================================================================================================================

    public void addAtTail(int data){
        if(head == null){
            head = new Node(data);
        }
        else {
            Node curr = head;
            while(curr.next != null) curr = curr.next;
            curr.next = new Node(data);
        }
        ++length;
    }



//    INSERTION==================================================================================================================

    public void insert(int idx, int data){
        if(idx <= 0 || idx > ( this.getLength() + 1) ) {
            System.out.println("Enter a Valid Index!!");
            return;
        }

        Node newNode = new Node(data);

        if(idx == 1){
            newNode.next = head;
            head = newNode;
        }
        else {

            Node curr = head;
            for(int i=1; i<=idx-2 && curr != null; ++i){
                curr = curr.next;
            }
           if(curr != null){
               newNode.next = curr.next;
               curr.next = newNode;
           }
        }
        ++length;
    }





//    Deletion==================================================================================================================


    public void delete(int idx){
        if(idx <= 0 || idx > this.getLength()){
            System.out.println("Enter a Valid Index!!");
        }
        if(head == null) return;

        if(idx == 1){
            head = head.next;
        }
        else {
            Node curr = head;
            for(int i=1; i<=idx-2 && curr!=null; ++i){
                curr = curr.next;
            }
            if(curr != null && curr.next != null){
                curr.next = curr.next.next;
            }
        }
        --length;
    }





//    Deletion==================================================================================================================


    public int search(Integer target){
        int i=1;
        Node curr = head;
        while(curr != null){
            if( target.equals( curr.data ) ) return i;
            curr = curr.next;
            ++i;
        }
        return -1;
    }
}
