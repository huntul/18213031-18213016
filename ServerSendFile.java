import java.io.BufferedInputStream;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.PrintWriter;
import java.net.ServerSocket;
import java.net.Socket;

/**
 * A TCP server that runs on port 9090.  When a client connects, it
 * sends the client the current date and time, then closes the
 * connection with that client.  Arguably just about the simplest
 * server you can write.
 */
public class ServerSendFile {

    /**
     * Runs the server.
     */
    public static void main(String[] args) throws IOException {
        ServerSocket listener = new ServerSocket(8888);
        try {
            while (true) {
                Socket socket = listener.accept();
                FileInputStream fis = null;
                BufferedInputStream bis = null;
                OutputStream os = null;
                File myFile = null;
                String line = null;
    			PrintWriter toClient = 
    				new PrintWriter(socket.getOutputStream(),true);
    			BufferedReader fromClient =
    				new BufferedReader(
    						new InputStreamReader(socket.getInputStream()));
    			System.out.println("Waiting for client on port " + listener.getLocalPort() + "..."); 
    			System.out.println("Just connected to " + socket.getRemoteSocketAddress()); 
        		toClient.println("1.Ghazwan.txt / 2.Huntul.txt / 3.Kuvluk.txt");
                do {
           			line = fromClient.readLine();
            		System.out.println("Server received: " + line);
            		if (line.equals("1")) {
            			myFile = new File ("D:/Kuliah/STI/Semester 5/pemrograman integratif/Server Java/Data Server/Ghazwan.txt");
            	        byte [] mybytearray  = new byte [(int)myFile.length()];
            	        fis = new FileInputStream(myFile);
            	        bis = new BufferedInputStream(fis);
            	        bis.read(mybytearray,0,mybytearray.length);
            	        os = socket.getOutputStream();
                        System.out.println("Sending Ghazwan.txt (" + mybytearray.length + " bytes)");
           	            os.write(mybytearray,0,mybytearray.length);
            	        os.flush();
                		toClient.println("Ghazwan.txt sent!");
            	        System.out.println("Done!");
           			} else if (line.equals("2")) {
            			myFile = new File ("D:/Kuliah/STI/Semester 5/pemrograman integratif/Server Java/Data Server/Huntul.txt");
            	        byte [] mybytearray  = new byte [(int)myFile.length()];
            	        fis = new FileInputStream(myFile);
            	        bis = new BufferedInputStream(fis);
            	        bis.read(mybytearray,0,mybytearray.length);
            	        os = socket.getOutputStream();
                        System.out.println("Sending Huntul.txt (" + mybytearray.length + " bytes)");
           	            os.write(mybytearray,0,mybytearray.length);
            	        os.flush();
               			toClient.println("Huntul.txt sent!");
            	        System.out.println("Done!");
           			} else if (line.equals("3")) {
            			myFile = new File ("D:/Kuliah/STI/Semester 5/pemrograman integratif/Server Java/Data Server/Kuvluk.txt");
            	        byte [] mybytearray  = new byte [(int)myFile.length()];
            	        fis = new FileInputStream(myFile);
            	        bis = new BufferedInputStream(fis);
            	        bis.read(mybytearray,0,mybytearray.length);
            	        os = socket.getOutputStream();
                        System.out.println("Sending Kuvluk.txt (" + mybytearray.length + " bytes)");
           	            os.write(mybytearray,0,mybytearray.length);
            	        os.flush();
               			toClient.println("Kuvluk.txt sent!");
            	        System.out.println("Done!");
           			} else if (line.equals("bye")) {
               			toClient.println("Thank you for connecting to " + socket.getLocalSocketAddress()); 
            		} else {
                		toClient.println("Inputan salah!");
            		}
                } while (!(line.equals("bye")));
                
                if (bis != null) bis.close();
                if (os != null) os.close();
                if (socket!=null) socket.close();

            }
        }
        finally {
            if (listener != null) listener.close();
        }
    }
}
