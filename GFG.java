//  import java.util.*;
//counting duplicate characters
// class GFG {

//    public static void printDuplicates(String str)
//    {
//        int len = str.length();

//        // Sorting the string
//        char[] chars = str.toCharArray();
//        Arrays.sort(chars);
//        String sortedStr = new String(chars);

//        // Loop through the sorted string to find duplicates
//        for (int i = 0; i < len; i++) {
//            int count = 1;

//            // Counting the occurrences of each character
//            while (i < len - 1
//                && sortedStr.charAt(i)
//                        == sortedStr.charAt(i + 1)) {
//                count++;
//                i++;
//            }

//            // Printing the duplicate character and its
//            // count
//            if (count >1) {
//                System.out.println(sortedStr.charAt(i)
//                                + ", count = " + count);
//            }
//        }
//    }

//    public static void main(String[] args)
//    {   
        
//         Scanner sc=new Scanner(System.in);
//         System.out.print("enter a string");
//        String str = sc.nextLine();
//        printDuplicates(str);
//    }

// } 
    
// import java.util.Arrays;

// class GFG{

//     public static void main(String args[]){
       
//         int arr[]={6,1,2,1,9,9,3,1,2,6,8,5};
//         Boolean arr1[]=new Boolean[12];
//         for(int i=0;i<arr1.length;i++){
//             arr1[i]=false;
//         }
        // countOccurence(arr);
    //     countOccurence(arr,arr1);

    // }
//    
            //  static void countOccurence(int arr[]){
            //  Arrays.sort(arr);
            //  System.out.println("FREQUENCY MAP WITHOUT USING HASH MAP FOR SORTED ARRAY IS:");
            //  for(int i=0;i<arr.length-1;i++){
            //     int count=1;
            //     for(int j=i+1;j<arr.length;j++){
            //         if(arr[i]==arr[j]){
            //             count++;
            //         }
            //         else{
            //             break;
            //         }
            //     }
               
            //     System.out.println(arr[i]+"->"+count);
            //     i=i+count-1;
            // }
           
        //     static void countOccurence(int arr[],Boolean arr1[]){
        //     System.out.println("FREQUENCY MAP WITHOUT USING HASH MAP FOR UNSORTED ARRAY IS:");
        //     for (int i = 0; i < arr.length; i++) {
 
        //         // Skip this element if already processed
        //         if(arr1[i] == true)
        //             continue;
         
        //         // Count frequency
               
        //         int count = 1;
        //         for (int j = i + 1; j < arr.length-1; j++) {
        //             if (arr[i] == arr[j]) {
        //                 arr1[j] = true;
        //                 count++;
        //             }
        //         }
        //         System.out.println(arr[i]+ "->"+count);
        //     }

        //     for(int i=0;i<arr1.length;i++){
        //         System.out.print(arr1[i]+" ");
        //     }
        // }
        //     }
    
// import java.util.*;
// class GFG
// {
// 	public static void main(String[] args) {
		
// 	Scanner scn=new Scanner(System.in);
// 	System.out.println("Enter the String");
// 	String info=scn.nextLine();
	
// 	char[] str=info.toCharArray();
// 	int len=str.length;
// 	removeduplicatecharacters(str,len);
		
// 	}
	
// 	static void removeduplicatecharacters(char[] str,int len){
	    
// 	    int index=0;
// 	    int i,j;
// 	    for(i=0;i<str.length;i++){
	        
// 	        for(j=0;j<i;j++){
	            
// 	            if(str[i]==str[j]){
// 	                break;
// 	            }
// 	        }
	        
// 	        if(i==j){
// 	            str[index]=str[i];
// 	            index++;
// 	        }
	        
	       
// 	    }
// 	    System.out.println("The string after removing duplicate characters is:");
// 	     System.out.println(String.valueOf(Arrays.copyOf(str,index)));
// 	}
	
// }




