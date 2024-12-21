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
        sc.close();
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




    public void insert(int pos, int data){
        if(pos <= 0){
            System.out.println("Invalid Position!!");
            return;
        }
        if(pos==1){
            Node node = new Node(null, data, head);
            if (head != null) {
                head.prev = node;
            }
            head = node;
            return;
        }
        

        Node curr = head;
        for(int i=1; i<pos-1 && curr != null; ++i){
            curr = curr.next;
        }

        if(curr != null){
            Node node = new Node(curr, data, curr.next);
            if(curr.next != null){
                curr.next.prev = node;
            }
            curr.next = node;
        }
        else{
            System.out.println("Invalid Position!!");
        }
    }



    public static void main(String[] args) {

       
        DoublyLinkedList dll =  new DoublyLinkedList();
        dll.create(3);
        dll.display();


        System.out.println("Insert ===================");

        dll.insert(1, 10); // Insert at head
        dll.insert(2, 20); // Insert at tail
        dll.insert(2, 15); // Insert at position 2
        dll.insert(5, 25); // Invalid position

        dll.display(); // Output: Doubly Linked List: 10 15 20


    }    
}
