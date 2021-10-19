public class Main {
    public static void main(String args[]) {

        String s="Name";
        System.out.println("s");

        byte a =30;
        System.out.println(a);
        String sr=new String("Name");
        System.out.println(sr);

        // CONCATENATE
        String name3= s+" "+sr;
        System.out.println(name3);
        System.out.println(name3.charAt(5));

        // Replace
        String name4= name3.replace('a','b');
        System.out.println(name4);

        // Substring
        String ek_naam="Sengupta and Archishman";
        System.out.println(ek_naam.substring(0,10));
    }
}