
class Date
{
    public:
        Date(int, int, int);
        void setDay (int D);
        void setMonth (int M);
        void setYear (int Y);
        int getDay ();
        int getMonth();
        int getYear();
        void DisplayDate();

    private:
        int Day, Month, Year;
};
