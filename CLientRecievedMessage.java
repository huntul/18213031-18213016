import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.net.Socket;

import javax.swing.JOptionPane;

/**
 * Trivial client for the date server.
 */
public class ClientRecievedMessage {

    /**
     * Runs the client as an application.  First it displays a dialog
     * box asking for the IP address or hostname of a host running
     * the date server, then connects to it and displays the date that
     * it serves.
     */
    public static void main(String[] args) throws IOException {
//        String serverAddress = JOptionPane.showInputDialog(
//            "Enter IP Address of a machine that is\n" +
//            "running the date service on port 9090:");
        Socket s = new Socket("localhost", 8888);
        try {
            String message = null;
            PrintWriter out =
                new PrintWriter(s.getOutputStream(), true);
            BufferedReader input =
                new BufferedReader(new InputStreamReader(s.getInputStream()));
            do {
                String answer = input.readLine();
                JOptionPane.showMessageDialog(null, answer);
                message = JOptionPane.showInputDialog("Please enter your message :");
                out.println(message);
                if (message.equals("1")) {
                    byte[] mybytearray = new byte[1024];
                    InputStream is = s.getInputStream();
                    FileOutputStream fos = new FileOutputStream("D:/Kuliah/STI/Semester 5/pemrograman integratif/Server Java/Data Client/Ghazwan.txt");
                    BufferedOutputStream bos = new BufferedOutputStream(fos);
                    int bytesRead = is.read(mybytearray, 0, mybytearray.length);
                    bos.write(mybytearray, 0, bytesRead);
                    bos.close();
                } else if (message.equals("2")) {
                    byte[] mybytearray = new byte[1024];
                    InputStream is = s.getInputStream();
                    FileOutputStream fos = new FileOutputStream("D:/Kuliah/STI/Semester 5/pemrograman integratif/Server Java/Data Client/Huntul.txt");
                    BufferedOutputStream bos = new BufferedOutputStream(fos);
                    int bytesRead = is.read(mybytearray, 0, mybytearray.length);
                    bos.write(mybytearray, 0, bytesRead);
                    bos.close();
                } else if (message.equals("3")) {
                    byte[] mybytearray = new byte[1024];
                    InputStream is = s.getInputStream();
                    FileOutputStream fos = new FileOutputStream("D:/Kuliah/STI/Semester 5/pemrograman integratif/Server Java/Data Client/Kuvluk.txt");
                    BufferedOutputStream bos = new BufferedOutputStream(fos);
                    int bytesRead = is.read(mybytearray, 0, mybytearray.length);
                    bos.write(mybytearray, 0, bytesRead);
                    bos.close();
                }
            } while (!(message.equals("bye")));
        } finally {
            if (s != null) s.close();
        }
        System.exit(0);
    }
}
