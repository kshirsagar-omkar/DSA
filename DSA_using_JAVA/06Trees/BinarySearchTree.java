
public class BinarySearchTree<T extends Comparable<T>> {

    //Node Structure For Tree
    @SuppressWarnings("hiding")
    private class MyTreeNode<T> {
        public MyTreeNode<T> left;
        public T data;
        public MyTreeNode<T> right;

        public MyTreeNode(T data) {
            this.left = null;
            this.data = data;
            this.right = null;
        }

        public void inOrder(){
            if(this.left != null)
                this.left.inOrder();
    
            System.out.print(this.data + " ");
    
            if(this.right != null)
                this.right.inOrder();            
        } 

    }



    //Main Implementation

    private MyTreeNode<T> root;

    public BinarySearchTree(){
        root = null;
    }



    //Binary Search Tree Insert

    public void insert(T data){

        MyTreeNode<T> node = new MyTreeNode<T>(data);

        if(root == null){
            root = node;
        }
        else{

            MyTreeNode<T> curr = root;
            MyTreeNode<T> prev = null;

            while(curr != null){

                prev = curr;

                if( data.compareTo( curr.data ) < 0 )
                    curr = curr.left;
                else
                    curr = curr.right;

            }

            if( prev.data.compareTo(prev.data) < 0 )
                prev.left = node;
            else
                prev.right = node;
        }
    }










    public void inOrder()
    {
        if(root != null)
            root.inOrder();
        else
            System.out.println("Tree is empty..");
    }
    







    

    public static void main(String[] args) {


        BinarySearchTree<Integer> root = new BinarySearchTree<Integer>();

        Integer n = 10;
        for(Integer i=0; i<n; ++i){

            root.insert(i);

        }


        root.inOrder();

    }

    
}