public class WithdrawalException 
{

}

class BankAccount
{

int balance = 100;
public int withdraw(int amount) throws WithdrawalException
{
    if (amount > balance)
    {
        throw new WithdrawalException();
    }
    balance -= amount;
    return balance;
}


}

