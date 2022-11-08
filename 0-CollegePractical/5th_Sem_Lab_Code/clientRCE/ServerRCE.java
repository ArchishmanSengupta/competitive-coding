// ------------ SERVER RCE ---------------- 
import java.io.*;
import java.net.*;
class serverRCE{
    public static void main(String args[])throws IOException{
        try{
            String str;
            ServerSocket server = new ServerSocket(6555);
            Socket client = server.accept();
            BufferedReader br = new BufferedReader(new InputStreamReader(client.getInputStream()));
            str = br.readLine();
            Runtime r = Runtime.getRuntime();
            Process p = r.exec(str);
        }
        catch(Exception e){
            System.out.println("Error" + e);
        }
    }
}