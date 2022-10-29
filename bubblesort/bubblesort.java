public class bubblesort{
    public static void main(String[] args){
        int arr[] = {1, 3, 11, 2, 7, 9, 6};
        for(int i=0;i<arr.length-1;i++){
            boolean control = true;
            for(int j=0;j<arr.length-i-1;j++){
                if(arr[j] > arr[j+1]){
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    control = false;
                }
            }
            if(control){
                break;
            }
        }
        for(int i=0;i<arr.length;i++){
            System.out.println(arr[i]);
        }
    }
}