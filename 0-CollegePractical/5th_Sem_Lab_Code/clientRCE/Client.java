//----- CLIENT RCE---------

package clientRCE;
import java.io.*;
import java.net.*;
class clientRCE{
public static void main(String args[])throws IOException{
    {
        try{
            String str; Socket client = new Socket("127.0.0.1",6555);
            PrintStream ps = new PrintStream(client.getOutputStream());
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            System.out.println("\t\t\t\tCLIENT WINDOW\n\n\t\t Enter the Command");
            str = br.readLine();
            ps.println(str);
        }
        catch(IOException e){
            System.out.println("Error" + e);
        }
    }
}
}