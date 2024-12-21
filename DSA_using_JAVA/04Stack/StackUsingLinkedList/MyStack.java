class Node{
    public Integer data;
    public Node next;

    public Node(Integer data){
        this.data = data;
        this.next = null;
    }
}




public class MyStack {
    private Node top;

    public MyStack(){
        this.top = null;
    }


    public boolean isEmpty(){
        return (top == null);
    }


    public void push(Integer data){
        Node node = new Node(data);
        node.next = top;
        top = node;
    }
    

    public Integer pop(){
        
        try {
            Integer data = top.data;
            top = top.next;
            return data;
        } 
        catch (Exception e) {
            System.out.println("\nStack Underflow! Cannot pop from an empty stack.\n");
            e.printStackTrace();
            return null;
        }
        
    }

    public Integer peek(){
        
        try {
            return top.data;
        } 
        catch (Exception e) {
            System.out.println("\nStack is empty! Cannot peek.\n");
            e.printStackTrace();
            return null;
        }

    }


    public static void main(String[] args) {
        MyStack st = new MyStack();

        st.push(11);

        System.out.println(st.pop());       

        
    }
}
