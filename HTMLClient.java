package tcp;

import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.InetAddress;
import java.net.Socket;

import javax.swing.JOptionPane;

/**
 * Trivial client for the date server.
 */
public class HTMLClient {

    /**
     * Runs the client as an application.  First it displays a dialog
     * box asking for the IP address or hostname of a host running
     * the date server, then connects to it and displays the date that
     * it serves.
     */
    public static void main(String[] args) throws IOException {
        Socket s = new Socket(("www.itb.ac.id"), 80);
        try {
            String message;
            int count  = 0;
            PrintWriter out =
                new PrintWriter(s.getOutputStream(), true);
            BufferedReader input =
                new BufferedReader(new InputStreamReader(s.getInputStream()));
            out.println("GET / HTTP/1.0"); 
            out.println(); 
            out.flush(); 
            while ((message = input.readLine()) != null) { 
            	count++; 
            	System.out.println(count); 
            	System.out.println(message); 
            } 
            input.close(); 
        } finally {
            if (s != null) s.close();
        }
        
        System.exit(0);
    }
}
