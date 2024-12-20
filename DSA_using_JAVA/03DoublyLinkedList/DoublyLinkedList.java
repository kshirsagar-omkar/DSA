import java.util.Scanner;


@SuppressWarnings("unused")

public class DoublyLinkedList {

    public class Node {
        public Node next;
        public int data;
        public Node prev;
    
        public Node(Node prev, int data, Node next){
            this.data = data;
            this.next = next;
            this.prev = prev;
        }
    }
    


    private Node head;



    public DoublyLinkedList(){
        this.head = null;
    }



    public void create(int n)
    {
        if(n <= 0){
            System.out.println("Size Must Be Positive!!");
            return;
        }

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Data: ");
        head = new Node(null, sc.nextInt() ,null);
        

        Node curr = head;

        for(int i=1; i<n; ++i){
            
            System.out.print("Enter Data: ");
            Node node = new Node(curr, sc.nextInt(), null);
            curr.next = node;
            curr = curr.next;
        }        
    }



    public void display(){
        if(head == null){
            System.out.println("List Is Empty !!");
            return;
        }

        Node curr = this.head;

        while(curr != null){
            System.out.print(curr.data + " -> " );
            curr = curr.next;
        }
        System.out.println("NULL");
    }








    public static void main(String[] args) {

       
        DoublyLinkedList dll =  new DoublyLinkedList();
        dll.create(5);
        dll.display();

    }    
}
