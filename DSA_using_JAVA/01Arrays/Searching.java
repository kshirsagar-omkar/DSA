import java.util.Scanner;

@SuppressWarnings("ALL")
public class Searching {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        Integer n = 0;
        Integer[] arr = null;
        Integer target=0;
        Integer index = -1;

        System.out.print("Enter How Many Elements : ");
        n = sc.nextInt();

        arr = new Integer[n];
        accept(arr);




        /*Linear Search */
//        System.out.print("Enter The Element to Search (Linear Search): ");
//        target = sc.nextInt();
//        index = linearSearch(arr, target);
//        if(index.equals(-1)){
//            System.out.println("Targeted Element NOT FOUND!");
//        }
//        else {
//            System.out.println("Targeted Element FOUND at Index: " + index);
//        }




        /*Binary Search*/
        System.out.print("Enter The Element to Search (Binary Search) [MAKE SURE ARRAY IS SORTED]: ");
        target = sc.nextInt();
        index = binarySearch(arr, target);
        if(index.equals(-1)){
            System.out.println("Targeted Element NOT FOUND!");
        }
        else {
            System.out.println("Targeted Element FOUND at Index: " + index);
        }




//        System.out.println(Arrays.toString(arr));


        sc.close();
    }

    private static void accept(Integer arr[]) {
        Scanner sc = new Scanner(System.in);
        try {
            System.out.print("Enter Data : ");
            for(int i=0; i<arr.length; ++i){
                arr[i] = sc.nextInt();
            }
        }
        catch (NullPointerException | NumberFormatException e){
            System.out.println(e.getMessage());
        }
        catch (Exception e){
            System.out.println(e.getMessage());
            e.printStackTrace();
        }
        sc.close();
    }


    @SuppressWarnings("unused")
    private static Integer linearSearch(Integer arr[], Integer target){
        try{
            for(Integer i=0; i<arr.length; ++i){
                if(arr[i].equals(target)) return i;
            }
        } catch (NullPointerException e) {
            System.out.println(e.getMessage());
        }
        catch (Exception e) {
            System.out.println(e.getMessage());
            e.printStackTrace();
        }

        return -1;
    }



    private static Integer binarySearch(Integer arr[], Integer target){
        try {
            Integer left = 0;
            Integer right = arr.length-1;
            Integer mid = 0;

            while (left <= right){
                mid = left + (right - left) / 2;
                if (arr[mid].equals(target)){
                    return mid;
                }
                else if (arr[mid] < target){
                    left = mid+1;
                }
                else {
                    right = mid-1;
                }
            }
        }
        catch (NullPointerException e){
            System.out.println("Array is null or contains null elements.");
        }
        catch (Exception e){
            System.out.println(e.getMessage());
            e.printStackTrace();
        }
        return -1;
    }
}
