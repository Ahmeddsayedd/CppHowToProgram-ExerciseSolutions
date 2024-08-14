#include <string>

class HeartRates
{
    public:
        HeartRates(std::string fn, std::string ln, int d, int m, int y);

        void setFirstName(std::string fn);
        void setLastName(std::string ln);
        void setDay(int D);
        void setMonth(int M);
        void setYear(int Y);
        std::string getFirstName();
        std::string getLastName();
        int getDay();
        int getMonth();
        int getYear();
        int getAge(int currentDay, int currentMonth, int currentYear);
        int getMaximumHeartRate(int currentDay, int currentMonth, int currentYear);
        void getTargetHeartRate(int currentDay, int currentMonth, int currentYear);

    private:
        std::string FirstName, LastName;
        int Day, Month, Year;
};
