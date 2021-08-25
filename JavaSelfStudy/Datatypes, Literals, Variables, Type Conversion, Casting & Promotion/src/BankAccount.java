public class BankAccount {

    static String bankName = "Bank of Baroda";
    String accountHoldersName;
    String accountNumber;
    float balance;

    public static void main(String[] args) {
        System.out.println(BankAccount.bankName);
        BankAccount bankAccount =new BankAccount();
        bankAccount.accountHoldersName="Lokesh";
        bankAccount.accountNumber="12345";
        bankAccount.balance=2000f;
        System.out.println(bankAccount.balance);
    }
}
