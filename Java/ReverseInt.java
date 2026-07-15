import java.util.Scanner;

class ReverseInt {
    public static void main(String args[]) {
        Scanner sin = new Scanner(System.in);
        System.out.print("Enter the number : ");
        int num = sin.nextInt();
        int rev = 0, temp = num;
        while (num != 0) {
            rev = rev * 10 + num % 10;
            num /= 10;
        }
        System.err.println("Reverse of " + temp + " is " + rev);
    }
}