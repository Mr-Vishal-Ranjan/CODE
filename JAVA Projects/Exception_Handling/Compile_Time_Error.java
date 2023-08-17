package Exception_Handling;

import java.io.IOException;

public class Compile_Time_Error {
    public static void main(String[] args) {
        try {
            throw new IOException();
        }
        catch (IOException e){
            System.out.println("Exception : "+e.getMessage());
        }
    }
}
