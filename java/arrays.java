import java.util.Arrays;

public class Main {
    public static void main(String args[]) {

        int a=30;
        int physics,chemistry,maths;
        // declaring array
        int [] marks= new int [3];
        marks[0]=100;
        marks[1]=99;
        marks[2]=98;
        for(int i=0;i<3;i++){
        System.out.println(marks[i]);
        }

        // declaring boolean array
        boolean [] marks1= new boolean [4];
        System.out.println(marks1[0]);
        
        // declaring String array
        String [] marks2=new String [3];
        System.out.println(marks2);

        // Get array length
        System.out.println(marks.length);

        // Sort
        System.out.println(marks[0]);
        Arrays.sort(marks);
        System.out.println(marks[0]);

        // 1D-2D
        int [] marks_dedo={1,2,3,4};

        int [][] finalmarks={{1,2,3},{1,2,3}};
        System.out.println(finalmarks[0][0]);

}
}