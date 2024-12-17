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

//    ==================================================================================================================

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


//    ==================================================================================================================


    public void display(){
        Node curr = head;
        while(curr != null){
            System.out.print(curr.data + " -> ");
            curr = curr.next;
        }
        System.out.println("NULL");
    }


    public static void main(String[] args) {
        SinglyLinkedList list = new SinglyLinkedList();

        list.create(3);
        list.display();
        System.out.println(list.getLength());
    }
    
}
