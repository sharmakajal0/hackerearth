import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;

class RoyAndProfilePicture {
    public void profilePic(int length, int width, int height){
        if ((width < length) || (length > height)){
            System.out.println("UPLOAD ANOTHER");
        }
        else if ((width >= length) && (height >= length)){
            if(width == height){
                System.out.println("ACCEPTED");
            }
            else{
                System.out.println("CROP IT");
            }
        }
    }
    public static void main(String args[] ) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        Scanner scan = new Scanner(System.in);
        int length = scan.nextInt();
        int testCase = scan.nextInt();
        int[] a = new int[2];
        for (int i = 0; i < testCase; i++) {
            a[0] = scan.nextInt();
            a[1] = scan.nextInt();
            // System.out.println(a[0] + " " + a[1]);
            RoyAndProfilePicture object = new RoyAndProfilePicture();
            object.profilePic(length, a[0], a[1]);
        }


      // Write your code here
        scan.close();
  }
}
