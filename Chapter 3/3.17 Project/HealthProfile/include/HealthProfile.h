#include <string>

class HealthProfile
{
    public:
        HealthProfile(std::string fn, std::string ln, std::string gender ,int d, int m, int y, int h, int w);

        void setFirstName(std::string fn);
        void setLastName(std::string ln);
        void setGender (std::string gender);
        void setDay(int D);
        void setMonth(int M);
        void setYear(int Y);
        void setHeight (int H);
        void setWeight (int W);
        std::string getFirstName();
        std::string getLastName();
        std::string getGender ();
        int getDay();
        int getMonth();
        int getYear();
        int getHeight();
        int getWeight();
        int getAge(int currentDay, int currentMonth, int currentYear);
        int getMaximumHeartRate(int currentDay, int currentMonth, int currentYear);
        void getTargetHeartRate(int currentDay, int currentMonth, int currentYear);
        int getBMI(int H, int W);

    private:
        std::string FirstName, LastName, Gender;
        int Day, Month, Year, Height, Weight, BMI;
};
