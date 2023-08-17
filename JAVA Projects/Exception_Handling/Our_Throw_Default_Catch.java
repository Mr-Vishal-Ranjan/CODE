package Exception_Handling;

public class Our_Throw_Default_Catch {
    public static void main(String[] args) {
        int bal = 5000;
        int WithdrawlAmount = 2000;

        if (bal < WithdrawlAmount){
            throw new ArithmeticException("Insufficient Balance");
        }
        bal = bal - WithdrawlAmount;
        System.out.println("Tranx. Successful");
        System.out.println("Program continue");
    }
}
