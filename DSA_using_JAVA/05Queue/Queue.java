class Node <DataType> {
    private DataType data;
    private Node<DataType> next;

    public Node(DataType data){
        this.data = data;
        this.next = null;
    }

    public DataType getData() {
        return data;
    }

    public void setData(DataType data) {
        this.data = data;
    }

    public Node<DataType> getNext() {
        return next;
    }

    public void setNext(Node<DataType> next) {
        this.next = next;
    }
}


public class Queue<DataType> {
    private Node<DataType> front;
    private Node<DataType> rear;
    private Integer length;

    public Queue(){
        this.length = 0;
        front = rear = null;
    }

    public Node<DataType> getFront() {
        return front;
    }

    public Node<DataType> getRear() {
        return rear;
    }

    public Integer getLength() {
        return length;
    }







    public Boolean isEmpty(){
        return (this.length == 0);
    }



    public void enqueue(DataType data){
        Node<DataType> node = new Node<DataType>(data);

        if( this.isEmpty() ){
            front = node;
        }
        else{
            rear.setNext(node);
        }
        rear = node;
        ++length;
    }



    public DataType dequeue(){
        if( this.isEmpty() ){
            System.out.println("Queue is Empty!!");
            return null;
        }

        DataType data = front.getData();

        front = front.getNext();
        --length;

        if( this.isEmpty() ){
            rear = null;
        }

        return data;
    }
    


    public DataType first(){
        if( this.isEmpty() ){
            System.out.println("Queue is Empty!!");
            return null;
        }
        return front.getData();
    }


    public String toString(){
        StringBuilder result = new StringBuilder();
        
        Node<DataType> curr = this.front;

        while (curr != null) {
            result.append(curr.getData()).append(" ");
            curr = curr.getNext();
        }
        return result.toString();
    }










    public static void main(String[] args) {

        System.out.println("\n\n");


        // Example with Integer type
        Queue<Integer> intQueue = new Queue<>();
        intQueue.enqueue(11);
        intQueue.enqueue(22);
        intQueue.enqueue(33);
        intQueue.enqueue(44);
        System.out.println("Integer Queue: " + intQueue);
        System.out.println("Dequeued: " + intQueue.dequeue());
        System.out.println("After dequeue: " + intQueue);



        System.out.println("\n==========\n");


        // Example with String type
        Queue<String> stringQueue = new Queue<>();
        stringQueue.enqueue("Apple");
        stringQueue.enqueue("Banana");
        stringQueue.enqueue("Cherry");
        System.out.println("String Queue: " + stringQueue);
        System.out.println("Dequeued: " + stringQueue.dequeue());
        System.out.println("After dequeue: " + stringQueue);
    }

}
