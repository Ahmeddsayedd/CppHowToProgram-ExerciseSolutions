
class Account
{
    public:
        Account(int balance);
        void Credit (int amount);
        void Debit (int amount);
        int getBalance ();

    private:
        int AccBalance;
};
