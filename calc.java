import java.util.Scanner;

public calc Main {
    public static void main(String[] args) {
        System.out.println("Name:Anand Kumar\n Uid: 22BCS50097");
        Scanner sc = new Scanner(System.in);
        
        System.out.println(" Enter first number that you want : ");
        double n1 = sc.nextDouble();

        System.out.println(" Enter second number that you want : ");
        double n2 = sc.nextDouble();

        System.out.println(" OPS [+, -, *, /]: ");
        char operator = sc.next().charAt(0);
        double result = 0.0;
        try {
            switch (operator) {
                case '+' : result = n1 + n2;
                    break;
                case '-' :result = n1 - n2;
                    break;
                case '*':result = n1 * n2;
                    break;
                case '/':if (n2 == 0) {
             throw new ArithmeticException("Error:Division by zero is not possible");
                    }
                    result = n1 / n2;
                    break;
                default:
            System.out.println("Invalid operation please select a valid option ");
                    return;
            }

            System.out.println("Your result is : " + result);
        } catch (ArithmeticException e) {
            System.out.println("HANDLED " + e.getMessage());
        }
    }
}